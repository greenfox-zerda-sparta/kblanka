#include <iostream>
#include "draw.h"
#include <cstdlib>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <SDL.h>

void draw_sierpinski(draw& d, SDL_Renderer* renderer, int line_lenght);
void draw_randomsize_sierpinski(draw& d, SDL_Renderer* renderer, int triangle_side);

int main(int argc, char ** argv) {
	srand(time(NULL));
	int triangle_side = rand() % 300 + 1;
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
		}
		draw d;
		draw_randomsize_sierpinski(d, renderer, triangle_side);		
	}
	SDL_RenderPresent(renderer);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}

void draw_randomsize_sierpinski(draw& d, SDL_Renderer* renderer, int triangle_side) {
	if (triangle_side > 1) {
		for (int j = 0; j < 6; j++) {
			d.MoveTo(400, 400);
			d.TurnTo(60);
			draw_sierpinski(d, renderer, triangle_side);
		}
	}
}

void draw_sierpinski(draw& d, SDL_Renderer* renderer, int triangle_side) {
	if (triangle_side > 1) {
		srand(time(NULL));
		int x = rand() % 255 + 1;
		int y = rand() % 255 + 1;
		int z = rand() % 255 + 1;
		for (int i = 0; i < 3; i++) {
			SDL_SetRenderDrawColor(renderer, x, y, z, 0);
			d.DrawBy(renderer, triangle_side);
			d.TurnTo(120);
			draw_sierpinski(d, renderer, triangle_side / 2);
		}
	}
	return;
}
