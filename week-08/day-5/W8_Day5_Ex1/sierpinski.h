#pragma once

using namespace std;

class Sierpinski {
public:
  Sierpinski();
  void draw_sierpinski(draw& d, SDL_Renderer* renderer, int line_lenght);
  void draw_sierpinski_diamond(draw& d, SDL_Renderer* renderer, int triangle_side);
  void draw_sierpinski_hexagonal_star(draw& d, SDL_Renderer* renderer, int triangle_side);
  void draw_sierpinski_hexagonal_star_extra(draw& d, SDL_Renderer* renderer, int triangle_side);
  void draw_sierpinski_windmill(draw& d, SDL_Renderer* renderer, int triangle_side);
  void draw_sierpinski_hexagon(draw& d, SDL_Renderer* renderer, int triangle_side);
  void draw_sierpinski_hexagonal_star_rotate(draw& d, SDL_Renderer* renderer, int triangle_side);
  ~Sierpinski();
};
