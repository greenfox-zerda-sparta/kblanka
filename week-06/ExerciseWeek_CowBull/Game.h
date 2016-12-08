/*
 * Game.h
 *
 *  Created on: 2016. dec. 8.
 *      Author: Tecra_Z50
 */

#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

class Game {
public:
  Game();
  int fill_vector_random(vector<int>& newVector);
  void print_all(vector<int>& newVector);
  void input_num(vector<int>& newVector);
  void compare_vectors(vector<int>& firstVector, vector<int>& secondVector, vector<int>& storageVector);
  virtual ~Game();
};

#endif /* GAME_H_ */
