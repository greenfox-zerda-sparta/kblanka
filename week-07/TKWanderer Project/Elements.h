#ifndef ELEMENTS_H
#define ELEMENTS_H
#include "Map.h"

class Elements {
protected:
  int loc_x;
  int loc_y;
  Map* map;
public:
  Elements();
  int get_loc_x();
  int get_loc_y();
  void random_move();
  bool is_valid_loc(int x, int y);
  virtual void set_loc(int x, int y);
  ~Elements();
};

#endif

