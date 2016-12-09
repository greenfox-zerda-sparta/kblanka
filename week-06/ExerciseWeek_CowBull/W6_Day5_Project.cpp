//============================================================================
// Name        : W6_Day5_Project.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include "Button.h"
#include "Game.h"

using namespace std;

int main() {

  vector<unsigned int> SecretVector, GuessVector, StorageVector;
  Game myGame;
  myGame.game_init(SecretVector, GuessVector, StorageVector);

	return 0;
}
