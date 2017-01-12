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
  int x, y; //coordinates
  bool quit = false;
  SDL_Event event;
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_Window* gWindow = NULL;
  //The surface contained by the window
  SDL_Surface* gScreenSurface = NULL;
  //The image we will load and show on the screen
  SDL_Surface* gBackground = NULL;
  gWindow = SDL_CreateWindow("SDL Fractal Drawing", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 800, SDL_WINDOW_SHOWN);
  //Get window surface
  gScreenSurface = SDL_GetWindowSurface(gWindow);
  gBackground = SDL_LoadBMP("back.bmp");
  SDL_BlitSurface(gBackground, NULL, gScreenSurface, NULL);
  SDL_UpdateWindowSurface(gWindow);
  SDL_Renderer* renderer = SDL_CreateRenderer(gWindow, -1, 0);
  SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, gBackground);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);

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
        box.x = 725;
        box.y = 0;
        box.w = 75;
        box.h = 75;
       
        int move_y = 75;
        if ((x > box.x) && (x < box.x + box.w) && (y > box.y) && (y < box.y + 5*move_y)) {
        brush_num = ((y - box.y) / move_y) + 1;
        }
       /* if ((x > box.x) && (x < box.x + box.w) && (y > box.y) && (y < box.y + box.h)) {
        brush_num = 1;
        }
        if ((x > box.x) && (x < box.x + box.w) && (y > box.y + move_y) && (y < box.y + move_y + box.h)) {
        brush_num = 2;
        }
        if ((x > box.x) && (x < box.x + box.w) && (y > box.y + (2 * move_y)) && (y < box.y + (2 * move_y) + box.h)) {
        brush_num = 3;
        }
        if ((x > box.x) && (x < box.x + box.w) && (y > box.y + (3 * move_y)) && (y < box.y + (3 * move_y) + box.h)) {
        brush_num = 4;
        }
        if ((x > box.x) && (x < box.x + box.w) && (y > box.y + (4 * move_y)) && (y < box.y + (4 * move_y) + box.h)) {
        brush_num = 5;
        }*/
      else if (brush_num > 0 && brush_num < 6){
        /*if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_LEFT)) {*/
        d.MoveTo(x, y);
        Sierpinski makeit;
        switch (brush_num) {
          case 1:
          makeit.draw_sierpinski(d, renderer, 50);
          break;
          case 2:
          makeit.draw_sierpinski_diamond(d, renderer, 50);
          break;
          case 3:
          makeit.draw_sierpinski_hexagonal_star(d, renderer, 50);
          break;
          case 4:
          makeit.draw_sierpinski_hexagonal_star_extra(d, renderer, 50);
          break;
          case 5:
          makeit.draw_sierpinski_hexagonal_star_rotate(d, renderer, 50);
          break;
        //default:
       // }
       }
      }
        break;
      }
    }
    //SDL_UpdateWindowSurface(gWindow);
  }
  

  //Free resources and close SDL
  SDL_RenderPresent(renderer);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(gWindow);
  SDL_Quit();
  return 0;
}

