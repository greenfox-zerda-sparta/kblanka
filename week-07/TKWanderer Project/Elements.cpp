#include <vector>
#include <string>
#include "Elements.h"

Elements::Elements() {
}

int Elements::get_loc_x() {
  return loc_x;
}

int Elements::get_loc_y() {
  return loc_y;
}

void Elements::random_move() {
  int old_loc_x = loc_x;
  int old_loc_y = loc_y;
  std::vector<std::string> rand_dir = { "down", "up", "left", "right"};
  if (rand_dir[rand() % 4] == "down") {
    set_loc(loc_x + 1, loc_y);
  } else if (rand_dir[rand() % 4] == "up") {
    set_loc(loc_x - 1, loc_y);
  } else if (rand_dir[rand() % 4] == "left") {
    set_loc(loc_x, loc_y - 1);
  } else if (rand_dir[rand() % 4] == "right") {
    set_loc(loc_x, loc_y + 1);
  }
  while (old_loc_x == loc_x && old_loc_y == loc_y) {
    random_move();
  }
}

bool Elements::is_valid_loc(int x, int y) {
  // Checking for map limits
  if (x > map->get_map_width() - 1 || x < 0) {
    return false;
  } 
  if (y > map->get_map_height() - 1 || y < 0) {
    return false;
  } 
  // Checking for walls
  if (map->get_tileMap()[x][y] == 0) {
    return false;
  }
  return true;
}

void Elements::set_loc(int x, int y) {
   if (is_valid_loc(x, y)) {
     loc_x = x;
     loc_y = y;
  }
}

Elements::~Elements() {
}