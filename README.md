# C/C++ and OOP

This is a repository to save the exercises I did to practice C/C++  
Also here are some exercises to OOP class and studies.

## SDLearning2

To be able to build and run programs in [_SDLearning2_](https://github.com/BlimblimCFT/CPP-Learning/tree/master/SDLearning2) folder, you need to:  
**_Step 1:_** - open terminal in this folder, run `mingw32-make -f Makefile`,  
**_Step 2:_** - open the **.exe** double clicking it or `start "(filename).exe"`  
For default, those will build any **.cpp** file inside **src** folder and make **main.exe**  


If you want to build a file that isn't inside **src**,  
then you need to modify **Makefile** parameters so it can build your file with the name you want.  
For example **whatever.cpp** located at **src2** folder:  
```
all: 
	g++ -Iinclude  -Iinclude/SDL2 -Llib -o ANYNAME src2/whatever.cpp -lmingw32 -lSDL2main -lSDL2 -mwindows
```
Then you can do **_Step 1_** again and to open the **ANYNAME.exe** you double click it or run `start "ANYNAME.exe"`

