#include <vector>
#include "Map.h"

// Map Layout
Map::Map() {
  tileMap = {
    { 1, 0, 1, 1, 0, 0, 0, 0, 1, 1 },
    { 1, 0, 0, 1, 0, 1, 1, 0, 0, 1 },
    { 1, 0, 1, 1, 1, 1, 1, 1, 0, 1 },
    { 1, 1, 1, 1, 0, 0, 0, 1, 0, 1 },
    { 1, 0, 0, 1, 1, 1, 0, 1, 0, 1 },
    { 1, 1, 0, 1, 0, 0, 0, 1, 0, 1 },
    { 1, 1, 0, 1, 0, 1, 1, 1, 1, 1 },
    { 0, 1, 0, 1, 0, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 1, 1, 1, 1, 0 },
    { 0, 0, 0, 1, 0, 1, 0, 0, 0, 0 }
  };
  map_width = 10;
  map_height = 10;
}

std::vector<std::vector <bool>> Map::get_tileMap() {
  return tileMap;
}

int Map::get_map_width() {
  return map_width;
}

int Map::get_map_height() {
  return map_height;
}

Map::~Map() {
}