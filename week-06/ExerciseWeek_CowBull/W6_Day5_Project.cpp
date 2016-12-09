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
#include <sstream>
#include "Button.h"
#include "Game.h"

using namespace std;

int main() {

  vector<unsigned int> SecretVector;
  vector<unsigned int> GuessVector;
  vector<unsigned int> StorageVector;
  StorageVector.reserve(3);
  int game_counter = 0;

  Game myGame;
  myGame.fill_vector_random(SecretVector);
  myGame.print_all(SecretVector);

  Button myResult;

  do{
  GuessVector.clear();
  myGame.input_num(GuessVector);
  myGame.compare_vectors(GuessVector, SecretVector, StorageVector);
  myResult.display(StorageVector);
  StorageVector.clear();
  game_counter++;
  cout << endl << "Game Counter: [" << game_counter << "] Left: [" << 10-game_counter << "]" << endl << endl;
  }while(GuessVector != SecretVector && game_counter != 10);

  if(game_counter == 10)
    cout << "<<< Sorry, no more try left. >>>";
  if(GuessVector == SecretVector)
    cout << "<<< Congratulations, You won! >>>";

	return 0;
}
