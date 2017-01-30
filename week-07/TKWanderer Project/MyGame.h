// #pragma once
#ifndef MYGAME_H
#define MYGAME_H
#include <vector>
#include "game-engine2.h"
#include "Map.h"
#include "Hero.h"
#include "Box.h"

class MyGame : public Game {
protected:
  Map* map;
  Hero* hero;
  std::vector<Box*> box;
  int box_counter;
  int press_counter;
public:
  MyGame();
  virtual void init(GameContext& context);
  virtual void render(GameContext& context);
  ~MyGame();
};

#endif