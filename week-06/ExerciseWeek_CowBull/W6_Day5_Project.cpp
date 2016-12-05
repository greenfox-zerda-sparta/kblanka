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

using namespace std;

int fill_vector_random(vector<int>& newVector) {
  srand (time(NULL));
  int b;
  for (int i =0; i < 4; i++){
    int b = rand() % 10;
    newVector.push_back(b);
  }
  return b;
}

void print_all(vector<int>& newVector) {
  cout << "The elements of the vector: ";
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
  }
  cout << endl;
}

void input_num(vector<int>& newVector) {
  cout << "Enter your number: " << endl;
  int input;
  while(newVector.size() != 4) {
    cin >> input;
    newVector.push_back(input);
  }
}

int main() {
  int bull = 0, cow = 0;
  vector<int> SecretVector;
  fill_vector_random(SecretVector);
  print_all(SecretVector);
  vector<int> GuessVector;
  input_num(GuessVector);
  if(GuessVector[1]==SecretVector[1]) cow++;
  else
  {
      if (GuessVector[1]==SecretVector[2]) bull++;
      if (GuessVector[1]==SecretVector[3]) bull++;
      if (GuessVector[1]==SecretVector[4]) bull++;
  }
  if(GuessVector[2]==SecretVector[2]) cow++;
  else
  {
      if (GuessVector[2]==SecretVector[1]) bull++;
      if (GuessVector[2]==SecretVector[3]) bull++;
      if (GuessVector[2]==SecretVector[4]) bull++;
  }
  if(GuessVector[3]==SecretVector[3]) cow++;
  else
  {
      if (GuessVector[3]==SecretVector[2]) bull++;
      if (GuessVector[3]==SecretVector[1]) bull++;
      if (GuessVector[3]==SecretVector[4]) bull++;
  }
  if(GuessVector[4]==SecretVector[4]) cow++;
  else
  {
      if (GuessVector[4]==SecretVector[2]) bull++;
      if (GuessVector[4]==SecretVector[3]) bull++;
      if (GuessVector[4]==SecretVector[1]) bull++;
  }

  cout << "Cow: " << cow << endl;
  cout << "Bull: " << bull << endl;

  if (SecretVector == GuessVector)
    cout << "You won!" << endl;
  else
    cout << "Looser!" << endl;

  /*for (unsigned int i = 0; i < 4; i++) {
    if (SecretVector[i] == GuessVector[i]){
      cout << "| X |";
    }else{
      cout << "| O |";
    }
  }

  cout << endl;

  for (unsigned int i = 0; i < 4; i++) {
    for (unsigned int j = 0; j < 4; j++) {
      if (SecretVector[i] == GuessVector[i]){
        cout << "| X |";
        cow++;
      }
      else if (SecretVector[i] == GuessVector[j]) {
        cout << "| W |";
        bull++;
      }
      else{
        cout << "| O |";
      }
    }
  }
*/
	return 0;
}
