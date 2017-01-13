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
  int brush_num_color = 0; //dafault value
  int x, y; //coordinates
  int r = 0;
  int g = 0;
  int b = 0;
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
  gBackground = SDL_LoadBMP("background_fractal2.bmp");
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

        //Tool boxes
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
        int size_move_y = 40;
        SDL_Rect color_box;
        color_box.x = 200;
        color_box.y = 0;
        color_box.w = 50;
        color_box.h = 40;
        int color_move_x = 50;

        if ((x > brush_box.x) && (x < brush_box.x + brush_box.w) && (y > brush_box.y) && (y < brush_box.y + 5 * brush_move_y)) {
          brush_num_form = ((y - brush_box.y) / brush_move_y) + 1;
        }
        else if ((x > size_box.x) && (x < size_box.x + size_box.w) && (y > size_box.y) && (y < size_box.y + 3 * size_move_y)) {
          brush_num_size = ((y - size_box.y) / size_move_y) + 1;
        }
        else if ((y > color_box.y) && (y < color_box.y + color_box.h) && (x > color_box.x) && (x < color_box.x + 8 * color_move_x)) {
          brush_num_color = ((x - color_box.x) / color_move_x) + 1;
          if (brush_num_color == 1) {
            r = 43; g = 133; b = 36;
          }
          if (brush_num_color == 2) {
            r = 79; g = 79; b = 172;
          }
          if (brush_num_color == 3) {
            r = 153; g = 47; b = 47;
          }
          if (brush_num_color == 4) {
            r = 155; g = 236; b = 150;
          }
          if (brush_num_color == 5) {
            r = 86; g = 165; b = 211;
          }
          if (brush_num_color == 6) {
            r = 189; g = 105; b = 217;
          }
          if (brush_num_color == 7) {
            r = 248; g = 253; b = 243;
          }
          if (brush_num_color == 8) {
            srand(time(NULL));
            r = rand() % 255;
            g = rand() % 255;
            b = rand() % 255;
          }
        }

        //Drawing Part
        else if (brush_num_size > 0 && brush_num_size < 4 && brush_num_form > 0 
          && brush_num_form < 6 && brush_num_color > 0 && brush_num_color < 9) {
          d.MoveTo(x, y);
          Sierpinski makeit;
          //First Form Variations
          if (brush_num_form == 1 && brush_num_size > 0 && brush_num_size < 4) {
            //if (brush_num_color < 9 && brush_num_color > 0) {
              makeit.draw_sierpinski(d, renderer, brush_num_size * 30, r, g, b);
            //}
          }
          //Second Form Variations
          else if (brush_num_form == 2 && brush_num_size > 0 && brush_num_size < 4) {
            //if (brush_num_color < 9 && brush_num_color > 0) {
              makeit.draw_sierpinski_diamond(d, renderer, brush_num_size * 30, r, g, b);
            //}
          }
          //Third Form Variations
          else if (brush_num_form == 3 && brush_num_size > 0 && brush_num_size < 4) {
            if (brush_num_color < 9 && brush_num_color > 0) {
              makeit.draw_sierpinski_hexagonal_star(d, renderer, brush_num_size * 10, r, g, b);
            }
          }
          //Fourth Form Variations
          else if (brush_num_form == 4 && brush_num_size > 0 && brush_num_size < 4) {
            if (brush_num_color < 9 && brush_num_color > 0) {
              makeit.draw_sierpinski_hexagonal_star_extra(d, renderer, brush_num_size * 10, r, g, b);
            }
          }
          //Fifth Form Variations
          else if (brush_num_form == 5 && brush_num_size > 0 && brush_num_size < 4) {
            if (brush_num_color < 9 && brush_num_color > 0) {
              makeit.draw_sierpinski_hexagonal_star_rotate(d, renderer, brush_num_size * 24, r, g, b);
            }
          }
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

