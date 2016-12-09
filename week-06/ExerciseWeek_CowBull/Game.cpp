/*
 * Game.cpp
 *
 *  Created on: 2016. dec. 8.
 *      Author: Tecra_Z50
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Game.h"

using namespace std;

Game::Game() {
}

void Game::compare_vectors(vector<unsigned int>& SecretVector, vector<unsigned int>& GuessVector, vector<unsigned int>& StorageVector) {
  int Y = 0, X = 0, Z = 0;// X = done, good place - good number; Y = almost, wrong place - good number; Z = zero, nothing
  if(SecretVector[1]==GuessVector[1]) ++X;
  else
  {
      if (SecretVector[1]==GuessVector[2]) Y++;
      if (SecretVector[1]==GuessVector[3]) Y++;
      if (SecretVector[1]==GuessVector[0]) Y++;
  }
  if(SecretVector[2]==GuessVector[2]) ++X;
  else
  {
      if (SecretVector[2]==GuessVector[1]) Y++;
      if (SecretVector[2]==GuessVector[3]) Y++;
      if (SecretVector[2]==GuessVector[0]) Y++;
  }
  if(SecretVector[3]==GuessVector[3]) ++X;
  else
  {
      if (SecretVector[3]==GuessVector[2]) Y++;
      if (SecretVector[3]==GuessVector[1]) Y++;
      if (SecretVector[3]==GuessVector[0]) Y++;
  }
  if(SecretVector[0]==GuessVector[0]) ++X;
  else
  {
      if (SecretVector[0]==GuessVector[2]) Y++;
      if (SecretVector[0]==GuessVector[3]) Y++;
      if (SecretVector[0]==GuessVector[1]) Y++;
  }
  StorageVector.push_back(X);
  StorageVector.push_back(Y);
  Z = 4 - X - Y;
  StorageVector.push_back(Z);
}

int Game::error_handling(int guess) throw (const char*) {
  if (guess > 9 || guess < 0) {
    throw "Invalid input. You guess should be between 0-9.";
  }
  else {
    return guess;
  }
}

void Game::fill_vector_random(vector<unsigned int>& SecretVector) {
  srand (time(NULL));
  for (int i =0; i < 4; i++){
    int b = rand() % 10;
    SecretVector.push_back(b);
  }
}

void Game::input_num(vector<unsigned int>& GuessVector) {
  cout << "Enter Your Guess (0-9): " << endl;
  int input;
  while(GuessVector.size() != 4) {
    cin >> input;
    try {
      error_handling(input);
    }catch (const char* excp) {
      cerr << "Error Message: " << excp << " >> Try again! <<" <<endl;
      cin >> input;
    }
    GuessVector.push_back(input);
  }
}

void Game::game_init(vector<unsigned int>& SecretVector, vector<unsigned int>& GuessVector, vector<unsigned int>& StorageVector) {
  welcome_game();
  int game_counter = 0;
  fill_vector_random(SecretVector);
  print_all(SecretVector); //Delete this while "real" game!
  do{
    GuessVector.clear();
    input_num(GuessVector);
    compare_vectors(GuessVector, SecretVector, StorageVector);
    Button myGame;
    myGame.display(StorageVector);
    StorageVector.clear();
    game_counter++;
    cout << endl << "<< Game Counter: [" << game_counter << "] Left: [" << 10-game_counter << "] >>" << endl << endl;
  }while(GuessVector != SecretVector && game_counter != 10);
  game_finalresult_display(SecretVector, GuessVector, game_counter);
}

void Game::game_finalresult_display(vector<unsigned int>& SecretVector, vector<unsigned int>& GuessVector, int game_counter){
  if(game_counter == 10)
    cout << "<<< Sorry, no more try left. >>>";
  if(GuessVector == SecretVector)
    cout << "<<< Congratulations, You won! >>>";
}

void Game::print_all(vector<unsigned int>& Vector) {
  cout << "The elements of the vector: ";
  for (unsigned int i = 0; i < Vector.size(); i++) {
    cout << Vector[i] << " ";
  }
  cout << endl;
}

void Game::welcome_game() {
  cout << "////////////////////////////////////////////////" << endl;
  cout << "//////////WELCOME  MY  MASTERMIND GAME//////////" << endl;
  cout << "////////////////////////////////////////////////" << endl << endl;
}

Game::~Game() {
}
