/*
 * Game.cpp
 *
 *  Created on: 2016. dec. 8.
 *      Author: Tecra_Z50
 */

#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "Game.h"

using namespace std;

Game::Game() {
  // TODO Auto-generated constructor stub
}

int Game::fill_vector_random(vector<int>& newVector) {
  srand (time(NULL));
  int b;
  for (int i =0; i < 4; i++){
    int b = rand() % 10;
    newVector.push_back(b);
  }
  return b;
}

void Game::print_all(vector<int>& newVector) {
  cout << "The elements of the vector: ";
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
  }
  cout << endl;
}

void Game::input_num(vector<int>& newVector) {
  cout << "Enter your number: " << endl;
  int input;
  while(newVector.size() != 4) {
    cin >> input;
    newVector.push_back(input);
  }
}

void Game::compare_vectors(vector<int>& firstVector, vector<int>& secondVector, vector<int>& storageVector) {
  int Y = 0, X = 0; // X = done, good place - good number; Y = almost, wrong place - good number
  if(firstVector[1]==secondVector[1]) ++X;
  else
  {
      if (firstVector[1]==secondVector[2]) Y++;
      if (firstVector[1]==secondVector[3]) Y++;
      if (firstVector[1]==secondVector[0]) Y++;
  }
  if(firstVector[2]==secondVector[2]) ++X;
  else
  {
      if (firstVector[2]==secondVector[1]) Y++;
      if (firstVector[2]==secondVector[3]) Y++;
      if (firstVector[2]==secondVector[0]) Y++;
  }
  if(firstVector[3]==secondVector[3]) ++X;
  else
  {
      if (firstVector[3]==secondVector[2]) Y++;
      if (firstVector[3]==secondVector[1]) Y++;
      if (firstVector[3]==secondVector[0]) Y++;
  }
  if(firstVector[0]==secondVector[0]) ++X;
  else
  {
      if (firstVector[0]==secondVector[2]) Y++;
      if (firstVector[0]==secondVector[3]) Y++;
      if (firstVector[0]==secondVector[1]) Y++;
  }
  /*cout << "X: " << X << endl;
  cout << "Y: " << Y << endl;*/
  storageVector.push_back(X);
  storageVector.push_back(Y);
}

Game::~Game() {
  // TODO Auto-generated destructor stub
}
