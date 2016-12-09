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
  unsigned int fill_vector_random(vector<unsigned int>& newVector);
  void print_all(vector<unsigned int>& newVector);
  void input_num(vector<unsigned int>& newVector);
  void compare_vectors(vector<unsigned int>& firstVector, vector<unsigned int>& secondVector, vector<unsigned int>& storageVector);
  virtual ~Game();
};

#endif /* GAME_H_ */
