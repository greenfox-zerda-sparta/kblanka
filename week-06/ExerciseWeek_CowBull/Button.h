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
  void X4_Y0_Z0();
  void X3_Y1_Z0();
  void X3_Y0_Z1();
  void X2_Y2_Z0();
  void X2_Y1_Z1();
  void X2_Y0_Z2();
  void X1_Y3_Z0();
  void X1_Y2_Z1();
  void X1_Y1_Z2();
  void X1_Y0_Z3();
  void X0_Y4_Z0();
  void X0_Y3_Z1();
  void X0_Y2_Z2();
  void X0_Y1_Z3();
  void X0_Y0_Z4();
  void display(vector<unsigned int>& storageVector);
  virtual ~Button();
};

#endif /* BUTTON_H_ */
