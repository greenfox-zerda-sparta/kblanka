/*
 * Button.h
 *
 *  Created on: 2016. dec. 8.
 *      Author: Tecra_Z50
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include <vector>
using namespace std;

class Button {
public:
  Button();
  void four_full_button();
  void one_empty_button();
  void half_empty_button();
  void one_full_button();
  void four_empty_button();
  void display(vector<int>& storageVector);
  virtual ~Button();
};

#endif /* BUTTON_H_ */
