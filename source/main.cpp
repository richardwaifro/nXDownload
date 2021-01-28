#include <stdlib.h>
#include <stdio.h>

#include <SDL2/SDL.h>
#include "pp4m.h"

int main(int argc, char *argv[]) {
	
	SDL_Window *window;
	SDL_Renderer *renderer;
	
	renderer = pp4m_Init(window, "test", 1280, 720);
	
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	
	pp4m_Quit();
	
	return 0;
}
