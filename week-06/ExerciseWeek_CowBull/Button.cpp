/*
 * Button.cpp
 *
 *  Created on: 2016. dec. 8.
 *      Author: Tecra_Z50
 */
#include <iostream>
#include "Button.h"
#include <vector>

using namespace std;

Button::Button() {

}

void Button::four_full_button(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "|XXXXX|" << " " << "|XXXXX|" << " " << "|XXXXX|" << " " << "|XXXXX|" << endl;
  cout << "|XXXXX|" << " " << "|XXXXX|" << " " << "|XXXXX|" << " " << "|XXXXX|" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::one_empty_button(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "|XXXXX|" << " " << "|XXXXX|" << " " << "|XXXXX|" << " " << "|OOOOO|" << endl;
  cout << "|XXXXX|" << " " << "|XXXXX|" << " " << "|XXXXX|" << " " << "|OOOOO|" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::half_empty_button(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "|XXXXX|" << " " << "|XXXXX|" << " " << "|OOOOO|" << " " << "|OOOOO|" << endl;
  cout << "|XXXXX|" << " " << "|XXXXX|" << " " << "|OOOOO|" << " " << "|OOOOO|" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::one_full_button(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "|XXXXX|" << " " << "|OOOOO|" << " " << "|OOOOO|" << " " << "|OOOOO|" << endl;
  cout << "|XXXXX|" << " " << "|OOOOO|" << " " << "|OOOOO|" << " " << "|OOOOO|" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::four_empty_button(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "|OOOOO|" << " " << "|OOOOO|" << " " << "|OOOOO|" << " " << "|OOOOO|" << endl;
  cout << "|OOOOO|" << " " << "|OOOOO|" << " " << "|OOOOO|" << " " << "|OOOOO|" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::display(vector<int>& storageVector){
  if (storageVector[0] == 0 && storageVector[1] == 4) {
  Button::four_empty_button();
  }
  if (storageVector[0] == 4 && storageVector[1] == 0) {
  Button::four_full_button();
  }
  if (storageVector[0] == 3 && storageVector[1] == 1) {
  Button::one_empty_button();
  }
  if (storageVector[0] == 2 && storageVector[1] == 2) {
  Button::half_empty_button();
  }
  if (storageVector[0] == 1 && storageVector[1] == 3) {
  Button::one_full_button();
  }
}


Button::~Button() {

}
