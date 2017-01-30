#ifndef HERO_H
#define HERO_H
#include <string>
#include "Elements.h"
#include "Map.h"

class Hero :public Elements {
private:
  std::string hero_image;
public:
  Hero(Map* _map);
  void set_hero_loc(int x, int y);
  std::string get_hero_image();
  void set_hero_image(std::string changed_image);
  ~Hero();
};

#endif
