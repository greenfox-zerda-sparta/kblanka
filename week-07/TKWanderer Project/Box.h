// #pragma once
#ifndef BOX_H
#define BOX_H
#include "Elements.h"
#include "Map.h"

class Box : public Elements {
private:
public:
  Box(Map* _area);
  ~Box();
  void set_box_loc_random_for_map();
};

#endif