#include <iostream>
#include <cstdlib>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <SDL.h>
#include "draw.h"
#include "sierpinski.h"
#include "game-engine.hpp"

using namespace std;

int main(int argc, char ** argv) {
  int brush_num = 0; //default value
  int x, y;
	bool quit = false;
	SDL_Event event;
	SDL_Init(SDL_INIT_EVERYTHING); 
  SDL_Window* window = SDL_CreateWindow("SDL2 Fractals", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 800, 0);
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0); 
  //SDL_SetRenderDrawColor(renderer, 19, 19, 70, 0);
  SDL_RenderClear(renderer);
  SDL_Surface* surface = SDL_LoadBMP("background.bmp");
  SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
  //Apply the image
  //SDL_BlitSurface(surface, NULL, texture, NULL);
  //Update the surface
  //SDL_UpdateWindowSurface(window);

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
      if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_LEFT)) {
        SDL_Rect box;
        box.x = 750;
        box.y = 0;
        box.w = 50;
        box.h = 50;
        if ((x > box.x) && (x < box.x + box.w) && (y > box.y) && (y < box.y + box.h)) {
          brush_num = 1;
        }
        else {
          if (brush_num == 1) {
            if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_LEFT)) {
              d.MoveTo(x, y);
              Sierpinski makeit;
              makeit.draw_sierpinski(d, renderer, 50);
            }
          }
        }
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

/*if (SDL_GetMouseState(&m, &n) & SDL_BUTTON(SDL_BUTTON_LEFT)) {
  //SDL_GetMouseState(&m, &n);
  d.MoveTo(m, n);
  Sierpinski makeit;
  makeit.draw_sierpinski(d, renderer, 50);*/