#include <vector>
#include "Hero.h"
#include "Map.h"

Hero::Hero(Map* _map) {
  map = _map;
  loc_x = 0;
  loc_y = 0;
  hero_image = "img/hero-down.bmp";
}

Hero::~Hero() {
}

void Hero::set_hero_loc(int x, int y) {
  // Checking for map limits
  if (x > map->get_map_width() - 1) {
    x = map->get_map_width() - 1;
  } else if (x < 0) {
    x = 0;
  }
  if (y > map->get_map_height() - 1) {
    y = map->get_map_height() - 1;
  } else if (y < 0) {
    y = 0;
  }
  // Checking for walls
  if (map->get_tileMap()[x][y] != 0) {
    loc_x = x;
    loc_y = y;
  }
}

std::string Hero::get_hero_image() {
  return hero_image;
}
void Hero::set_hero_image(std::string changed_image) {
  hero_image = changed_image;
}