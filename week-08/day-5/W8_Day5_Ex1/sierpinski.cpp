#include <iostream>
#include <SDL.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "draw.h"
#include "sierpinski.h"

Sierpinski::Sierpinski() {
}

//Basic Sierpinski Triangle function

void Sierpinski::draw_sierpinski(draw& d, SDL_Renderer* renderer, int triangle_side, int r, int g, int b) {
  if (triangle_side > 1) {
    for (int i = 0; i < 3; i++) {
      SDL_SetRenderDrawColor(renderer, r, g, b, 0);
      d.DrawBy(renderer, triangle_side);
      d.TurnTo(120);
      draw_sierpinski(d, renderer, triangle_side / 2, r, g, b);
    }
  }
  return;
}

//Diamond (based on Sierpinski Triangle) function

void Sierpinski::draw_sierpinski_diamond(draw& d, SDL_Renderer* renderer, int triangle_side, int r, int g, int b) {
  if (triangle_side > 1) {
    draw_sierpinski(d, renderer, triangle_side, r, g, b);
    d.TurnTo(300);
    draw_sierpinski(d, renderer, triangle_side, r, g, b);
  }
}

//Hexagonal Star (based on Sierpinski Triangle) function

void Sierpinski::draw_sierpinski_hexagonal_star(draw& d, SDL_Renderer* renderer, int triangle_side, int r, int g, int b) {
  if (triangle_side > 1) {
    for (int i = 0; i < 6; i++) {
      draw_sierpinski_diamond(d, renderer, triangle_side, r, g, b);
      d.TurnTo(60);
      d.DrawBy(renderer, triangle_side);
      d.TurnTo(60);
    }
  }
}

//Hexagonal Star with extra (based on Sierpinski Triangle) function

void Sierpinski::draw_sierpinski_hexagonal_star_extra(draw& d, SDL_Renderer* renderer, int triangle_side, int r, int g, int b) {
  if (triangle_side > 1) {
    for (int i = 0; i < 6; i++) {
      draw_sierpinski_diamond(d, renderer, triangle_side, r, g, b);
      d.TurnTo(60);
      d.DrawBy(renderer, triangle_side);
      for (int i = 0; i < 6; i++) {
        draw_sierpinski_diamond(d, renderer, triangle_side / 2, r, g, b);
      }
      d.TurnTo(60);
    }
  }
}

//Windmill (based on Sierpinski Triangle) function

void Sierpinski::draw_sierpinski_windmill(draw& d, SDL_Renderer* renderer, int triangle_side, int r, int g, int b) {
  if (triangle_side > 1) {
    for (int i = 0; i < 6; i++) {
      draw_sierpinski(d, renderer, triangle_side, r, g, b);
      d.TurnTo(300);
      draw_sierpinski(d, renderer, triangle_side, r, g, b);
      d.DrawBy(renderer, triangle_side);
    }
  }
}

//Hexagon (based on Sierpinski Triangle) function

void Sierpinski::draw_sierpinski_hexagon(draw& d, SDL_Renderer* renderer, int triangle_side, int r, int g, int b) {
  if (triangle_side > 1) {
    for (int j = 0; j < 6; j++) {
      d.TurnTo(60);
      draw_sierpinski(d, renderer, triangle_side, r, g, b);
    }
  }
}

//Star wint hexagons (based on Sierpinski Triangle) function

void Sierpinski::draw_sierpinski_hexagonal_star_rotate(draw& d, SDL_Renderer* renderer, int triangle_side, int r, int g, int b) {
  if (triangle_side > 0) {
    for (int i = 0; i < 6; i++) {
      SDL_SetRenderDrawColor(renderer, r, g, b, 0);
      d.DrawBy(renderer, triangle_side);
      d.MoveBy(-(triangle_side / 3));
      d.TurnTo(-60);
      draw_sierpinski_hexagonal_star_rotate(d, renderer, triangle_side / 3, r, g, b);
      draw_sierpinski(d, renderer, triangle_side / 2, r, g, b);
    }
  }
  return;
}

Sierpinski::~Sierpinski() {
}