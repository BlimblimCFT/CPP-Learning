#include <stdio.h>
#include <string>
#include <iostream>
#include <SDL.h>
using namespace std;


const int SCREEN_WIDTH = 640; //640 pixels wide
const int SCREEN_HEIGHT = 480; //480 pixels high

enum KeyPressSurfaces {
    KEY_PRESS_SURFACE_DEFAULT,
    KEY_PRESS_SURFACE_UP,
    KEY_PRESS_SURFACE_DOWN,
    KEY_PRESS_SURFACE_LEFT,
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_TOTAL
};

//Starts up SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();

//Down here are some global variables, in real programs it isn't a good idea to put them here, but for this example it's fine

//Loads individual image
SDL_Surface* loadSurface(string path);

//The window that will be rendering to
SDL_Window* gWindow = NULL; 
	
//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;
//The image that correspond to a key press
SDL_Surface* gKeyPressSurfaces[KEY_PRESS_SURFACE_TOTAL];

//The current displayed image
SDL_Surface* gCurrentSurface = NULL;

//Stretched image
SDL_Surface* gStretchedSurface = NULL;

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
        success = false;
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
    //Load default surface
    gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] = loadSurface("src/press.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] == NULL)
    {
        cout << "Failed to load default image!" << endl;
        success = false;
    }
    //Load up surface
    gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] = loadSurface("src/up.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] == NULL)
    {
        cout << "Failed to load up image!" << endl;
        success = false;
    }
    //Load down surface
    gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] = loadSurface("src/down.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] == NULL)
    {
        cout << "Failed to load down image!" << endl;
        success = false;
    }
    //Load left surface
    gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] = loadSurface("src/left.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] == NULL)
    {
        cout << "Failed to load left image!" << endl;
        success = false;
    }
    //Load right surface
    gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] = loadSurface("src/right.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] == NULL)
    {
        cout << "Failed to load right image!" << endl;
        success = false;
    }
    gStretchedSurface = loadSurface("src/stretch.bmp");
    return success;
}

void close()
{
    //Free loaded images
    SDL_FreeSurface(gStretchedSurface);
    gStretchedSurface = NULL;

    //Deallocate surface
    SDL_FreeSurface(gXOut);
    gXOut = NULL;

    //Destroy window
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}

SDL_Surface* loadSurface(string path)
{
    //The final optimized image
    SDL_Surface* optimizedSurface = NULL;  //declare a pointer to the final optimized image.

    //Load image at specified path
    SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());
    if (loadedSurface == NULL)
    {
        cout << "Unable to load image " << path.c_str() << "! SDL Error: " << SDL_GetError() << endl;
    }
    else
    {
        //Convert surface to screen format
        optimizedSurface = SDL_ConvertSurface(loadedSurface, gScreenSurface->format, 0);
        //SDL_ConverSurface takes the loaded surface and converts it to the format of the screen surface.
        if (optimizedSurface == NULL)
        {
            cout << "Unable to optimize image " << path.c_str() << "! SDL Error: " << SDL_GetError() << endl;
        }
        //Get rid of old loaded surface 
        SDL_FreeSurface(loadedSurface);
        //This is necessary because SDL_ConvertSurface doesn't free the memory of the loaded surface, so if you don't free it
        //you'll have two copies of the same image in memory.
    }
    return optimizedSurface; //return the pointer to the final optimized image.
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

            gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

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
                    
                    //User presses a key
                    else if (e.type == SDL_KEYDOWN)
                    {
                        //Select surfaces based on key press
                        switch (e.key.keysym.sym)
                        {
                            case SDLK_UP:
                                gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];
                                break;
                            case SDLK_DOWN:
                                gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];
                                break;
                            case SDLK_LEFT:
                                gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];
                                break;
                            case SDLK_RIGHT:
                                gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];
                                break;
                            default:
                                gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];
                                break;
                        }
                    }
                }
                //Apply the image stretched
                    SDL_Rect stretchRect;
                    stretchRect.x = 0;
                    stretchRect.y = 0;
                    stretchRect.w = SCREEN_WIDTH;
                    stretchRect.h = SCREEN_HEIGHT;
                    SDL_BlitScaled (gStretchedSurface, NULL, gScreenSurface, &stretchRect);

                //Update the surface
                SDL_UpdateWindowSurface(gWindow);
            }
            
        }
    }
    //Free resources and close SDL
    close();

    return 0;
}