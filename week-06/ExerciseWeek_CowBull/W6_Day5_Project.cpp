//============================================================================
// Name        : W6_Day5_Project.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "Button.h"
#include "Game.h"

using namespace std;

int main() {

  vector<int> SecretVector;
  vector<int> GuessVector;
  vector<int> StorageVector;
  StorageVector.reserve(2);

  Game myGame;
  myGame.fill_vector_random(SecretVector);
  myGame.print_all(SecretVector);
  myGame.input_num(GuessVector);
  myGame.print_all(GuessVector);
  myGame.compare_vectors(GuessVector, SecretVector, StorageVector);

  Button myResult;
  myResult.display(StorageVector);

	return 0;
}
