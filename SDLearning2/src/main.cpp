#include <stdio.h>
#include <iostream>
#include <SDL.h>
using namespace std;


const int SCREEN_WIDTH = 640; //640 pixels wide
const int SCREEN_HEIGHT = 480; //480 pixels high

//Starts up SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();

//Down here are some global variables, in real programs it isn't a good idea to put them here, but for this example it's fine

//The window that will be rendering to
SDL_Window* gWindow = NULL; 
	
//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//The image that will be loaded and displayed
SDL_Surface* gXOut = NULL;


//These are pointers to SDL Surface, to allocate memory to load images and reference an image by memory location
//It's important to always initialize these pointers to NULL, otherwise you'll get a memory leak

//SDL_Surface is an image data type, contains pixels and other information about the image
//It uses CPU to render, and also can use GPU to render but it's more difficult to use

bool init()
{
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO)<0)
    {
        cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << endl;
    }
    else 
    {
        //Create window
        gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (gWindow == NULL)
        {
            cout << "Window could not be created! SDL Error: " << SDL_GetError() << endl;
            success = false;
        }
        else 
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface(gWindow);
        }
    }
    return success;
}

//The SDL GetWindowSurface grab the surface contained by the window, so it's possible to
//show images inside the window

bool loadMedia()
{
    //Loading success flag
    bool success = true;

    //Load splash image
    gXOut = SDL_LoadBMP("src/x.bmp");
    if (gXOut == NULL)
    {
        cout << "Unable to load image src/x.bmp" << "! SDL Error: " << SDL_GetError() << endl;
        success = false;
    }
    return success;
}

void close()
{
    //Deallocate surface
    SDL_FreeSurface(gXOut);
    gXOut = NULL;

    //Destroy window
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}

int main(int argc, char* args[])
{
    //Start up SDL and create window
    if (!init())
    {
        cout << "Failed to initialize!" << endl;
    }
    else
    {
        //load media
        if (!loadMedia())
        {
            cout << "Failed to load media!" << endl;
        }
        else
        {
            //Main loop flag
            bool quit = false;

            //Event handler
            SDL_Event e;

            //While application is running
            while (!quit)
            {
                //Handle events on queue
                while (SDL_PollEvent(&e) != 0)
                {
                    //User requests quit
                    if (e.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                }
                //Apply the image
                SDL_BlitSurface(gXOut, NULL, gScreenSurface, NULL);
                //Update the surface
                SDL_UpdateWindowSurface(gWindow);
            }
            
        }
    }
    //Free resources and close SDL
    close();

    return 0;
}