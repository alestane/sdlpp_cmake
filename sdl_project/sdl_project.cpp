// sdl_project.cpp : Defines the entry point for the application.
//

#include "sdl_project.h"
#include <SDL.h>
#include <SDL_main.h>

using namespace std;

int main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_VIDEO);
	cout << "Hello CMake." << endl;
	return 0;
}
