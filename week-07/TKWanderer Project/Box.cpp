#include <vector>
#include <cstdlib>
#include "Box.h"
#include "Map.h"

Box::Box(Map* _area) {
  map = _area;
  set_box_loc_random_for_map();
}

Box::~Box() {
}

void Box::set_box_loc_random_for_map() {
  loc_x = rand() % 10;
  loc_y = rand() % 10;
  if (map->get_tileMap()[loc_x][loc_y] == 0 || (loc_x == 0 && loc_y == 0)) {
    set_box_loc_random_for_map();
  }
}
