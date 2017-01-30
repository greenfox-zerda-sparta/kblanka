#ifndef MAP_H
#define MAP_H

#include <vector>

class Map {
private:
  std::vector<std::vector <bool>> tileMap;
  int map_width;
  int map_height;
public:
  Map();
  std::vector<std::vector <bool>> get_tileMap();
  int get_map_width();
  int get_map_height();
  ~Map();
};
#endif
