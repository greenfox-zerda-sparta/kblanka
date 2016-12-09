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
#include "Button.h"

using namespace std;

class Game {
public:
  Game();
  void compare_vectors(vector<unsigned int>& firstVector, vector<unsigned int>& secondVector, vector<unsigned int>& storageVector);
  int error_handling(int guess) throw (const char*);
  void fill_vector_random(vector<unsigned int>& newVector);
  void input_num(vector<unsigned int>& newVector);
  void game_init(vector<unsigned int>& SecretVector, vector<unsigned int>& GuessVector, vector<unsigned int>& StorageVector);
  void game_finalresult_display(vector<unsigned int>& SecretVector, vector<unsigned int>& GuessVector, int game_counter);
  void print_all(vector<unsigned int>& newVector);
  void welcome_game();
  virtual ~Game();
};

#endif /* GAME_H_ */
