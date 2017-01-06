#include <iostream>
#include "draw.h"
#include <cstdlib>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <SDL.h>

void draw_sierpinski(draw& d, SDL_Renderer* renderer, int line_lenght);
void draw_randomsize_sierpinski_hexagon(draw& d, SDL_Renderer* renderer, int triangle_side);
void draw_snowflake(draw& d, SDL_Renderer* renderer, int branch_size);
void draw_randomsize_star(draw& d, SDL_Renderer* renderer, int triangle_side);

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
				draw_randomsize_sierpinski_hexagon(d, renderer, triangle_side);
			}
			if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_RIGHT)) {
				d.MoveTo(x, y);
				srand(time(NULL));
				int triangle_side = rand() % 100 + 10;
				draw_randomsize_star(d, renderer, triangle_side);
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

void draw_randomsize_sierpinski_hexagon(draw& d, SDL_Renderer* renderer, 
	int triangle_side) {
	if (triangle_side > 1) {
		for (int j = 0; j < 6; j++) {
			d.TurnTo(60);
			draw_sierpinski(d, renderer, triangle_side);
		}
	}
}

void draw_sierpinski(draw& d, SDL_Renderer* renderer, int triangle_side) {
	if (triangle_side > 1) {
		srand(time(NULL));
		int r = rand() % 255;
		int g = rand() % 255;
		int b = rand() % 255;
		int alpha = rand() % 255;
		for (int i = 0; i < 3; i++) {
			SDL_SetRenderDrawColor(renderer, r, g, b, alpha);
			d.DrawBy(renderer, triangle_side);
			d.TurnTo(120);
			draw_sierpinski(d, renderer, triangle_side / 2);
		}
	}
	return;
}

void draw_randomsize_star(draw& d, SDL_Renderer* renderer, int triangle_side) {
	if (triangle_side > 0) {
		for (int i = 0; i < 6; i++) {
			int r = rand() % 255;
			int g = rand() % 255;
			int b = rand() % 255;
			SDL_SetRenderDrawColor(renderer, r, g, b, 0);
			d.DrawBy(renderer, triangle_side);
			d.MoveBy(-(triangle_side / 3));
			d.TurnTo(-60);
			draw_randomsize_star(d, renderer, triangle_side / 3);
			draw_sierpinski(d, renderer, triangle_side / 2);
		}
	}
	return;
}


void draw_snowflake(draw& d, SDL_Renderer* renderer, int triangle_side) { //sth wrong with this, because it generalizes two snowflake
	//and works only with numbers dividable with 3
	if (triangle_side > 1) {
		for (int i = 0; i < 6; i++) {
			SDL_SetRenderDrawColor(renderer, 100, 100, 100, 0);
			d.DrawBy(renderer, triangle_side);
			d.MoveBy(-(triangle_side / 3));
			d.TurnTo(-60);
			draw_snowflake(d, renderer, triangle_side / 3);
		}
		for (int i = 0; i < 6; i++) {
			SDL_SetRenderDrawColor(renderer, 200, 100, 100, 0);
			d.DrawBy(renderer, triangle_side);
			//d.MoveBy(- (triangle_side / 3));
			d.TurnTo(60);
			draw_snowflake(d, renderer, triangle_side / 3);
		}
	}
	return;
}
