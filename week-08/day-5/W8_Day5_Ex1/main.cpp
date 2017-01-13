#include <iostream>
#include <cstdlib>
#include <stdlib.h>     
#include <time.h>
#include <SDL.h>
#include "draw.h"
#include "sierpinski.h"
#include "game-engine.hpp"

using namespace std;

int main(int argc, char ** argv) {
  int brush_num_form = 0; //default value
  int brush_num_size = 0; //default value
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
        SDL_Rect brush_box;
        brush_box.x = 725;
        brush_box.y = 0;
        brush_box.w = 75;
        brush_box.h = 75;
        int brush_move_y = 75;
        SDL_Rect size_box;
        size_box.x = 0;
        size_box.y = 0;
        size_box.w = 50;
        size_box.h = 30;
        int size_move_y = 30;
        if ((x > brush_box.x) && (x < brush_box.x + brush_box.w) && (y > brush_box.y) && (y < brush_box.y + 5 * brush_move_y)) {
          brush_num_form = ((y - brush_box.y) / brush_move_y) + 1;
        }
        else if ((x > size_box.x) && (x < size_box.x + size_box.w) && (y > size_box.y) && (y < size_box.y + 3 * size_move_y)) {
          brush_num_size = ((y - size_box.y) / size_move_y) + 1;
        }
        else if (brush_num_size > 0 && brush_num_size < 4 && brush_num_form > 0 && brush_num_form < 6) {
          d.MoveTo(x, y);
          Sierpinski makeit;
          if (brush_num_form == 2 && brush_num_size == 1) {
            makeit.draw_sierpinski_diamond(d, renderer, 90);
          }
          else if (brush_num_form == 2 && brush_num_size == 2) {
            makeit.draw_sierpinski_diamond(d, renderer, 60);
          }
          else if (brush_num_form == 2 && brush_num_size == 3) {
            makeit.draw_sierpinski_diamond(d, renderer, 30);
          }

          /*switch (brush_num_form) {
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
          }
          switch (brush_num_size) {
          case 1:
            makeit.draw_sierpinski(d, renderer, 90);
            break;
            case 2:
            makeit.draw_sierpinski(d, renderer, 60);
            break;
            case 3:
            makeit.draw_sierpinski(d, renderer, 30);
            break;
            }*/
        }
        break;
      }
    }
  }
  SDL_RenderPresent(renderer);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(gWindow);
  SDL_Quit();
  return 0;
}

