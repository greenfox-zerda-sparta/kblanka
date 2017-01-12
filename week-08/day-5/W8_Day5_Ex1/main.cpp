#include <iostream>
#include <cstdlib>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <SDL.h>
#include "draw.h"
#include "sierpinski.h"

int main(int argc, char ** argv) {
	bool quit = false;
	SDL_Event event;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("SDL2 Fractal",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 800, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
	SDL_RenderClear(renderer);
	while (!quit) {
		SDL_WaitEvent(&event);
		switch (event.type) {
		case SDL_QUIT:
			quit = true;
			break;
		case SDL_MOUSEBUTTONDOWN:
			quit = false;
			draw d;
			SDL_PumpEvents();
			int x, y;
			if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_LEFT)) {
				d.MoveTo(x, y);
				srand(time(NULL));
				int triangle_side = rand() % 100;
        Sierpinski makeit;
        makeit.draw_sierpinski_hexagonstar(d, renderer, triangle_side);
			}
			if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_RIGHT)) {
				d.MoveTo(x, y);
				srand(time(NULL));
				int triangle_side = rand() % 100 + 10;
        //draw_diamond_sierpinski_star2(d, renderer, triangle_side);
			}
			break;
		}
	}
	SDL_RenderPresent(renderer);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}

