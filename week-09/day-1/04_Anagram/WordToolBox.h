/*
 * WordToolBox.h
 *
 *  Created on: 2016. dec. 19.
 *      Author: Tecra_Z50
 */

#ifndef WORDTOOLBOX_H_
#define WORDTOOLBOX_H_
#include <string>

using namespace std;

class WordToolBox {
protected:
  string stringHeld;
public:
  WordToolBox(string stringHeld);
  string getS();
  string setS(string my_word);
  bool isAnAnagram(string stringToCheck);
  int countHowMany(char charToFind);
  virtual ~WordToolBox();
};

#endif /* WORDTOOLBOX_H_ */
