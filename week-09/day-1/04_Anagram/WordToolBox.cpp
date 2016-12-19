/*
 * WordToolBox.cpp
 *
 *  Created on: 2016. dec. 19.
 *      Author: Tecra_Z50
 */

#include "WordToolBox.h"
#include <string>
#include <algorithm>

using namespace std;

WordToolBox::WordToolBox(string stringHeld) {
  transform(stringHeld.begin(), stringHeld.end(), stringHeld.begin(), ::tolower);
  this->stringHeld = stringHeld;
}

string WordToolBox::getS() {
  return this->stringHeld;
}

string WordToolBox::setS(string my_word) {
  this->stringHeld = my_word;
  return this->stringHeld;
}

bool WordToolBox::isAnAnagram(string stringToCheck) {
  transform(stringToCheck.begin(), stringToCheck.end(), stringToCheck.begin(), ::tolower);
  sort(stringHeld.begin(), stringHeld.end());
  sort(stringToCheck.begin(), stringToCheck.end());
   return stringHeld == stringToCheck;
}

int WordToolBox::countHowMany(char charToFind) {
  charToFind = tolower(charToFind);
  unsigned int counter = 0;
  for(unsigned int i = 0; i < stringHeld.size(); i++) {
    if(charToFind == stringHeld[i]) {
      counter++;
    }
  }
  return counter;
}

WordToolBox::~WordToolBox() {

}
