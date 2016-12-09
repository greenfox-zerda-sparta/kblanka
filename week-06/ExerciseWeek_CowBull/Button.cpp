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

void Button::X4_Y0_Z0(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X3_Y1_Z0(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X3_Y0_Z1(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "|     |" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X2_Y2_Z0(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X2_Y1_Z1(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << " " << "|     |" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X2_Y0_Z2(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "| XXX |" << " " << "| XXX |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X1_Y3_Z0(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << endl;
  cout << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X1_Y2_Z1(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << " " << "|     |" << endl;
  cout << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X1_Y1_Z2(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "| OOO |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "| XXX |" << " " << "| OOO |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X1_Y0_Z3(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| XXX |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "| XXX |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X0_Y4_Z0(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << endl;
  cout << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X0_Y3_Z1(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << " " << "|     |" << endl;
  cout << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X0_Y2_Z2(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| OOO |" << " " << "| OOO |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "| OOO |" << " " << "| OOO |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X0_Y1_Z3(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "| OOO |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "| OOO |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::X0_Y0_Z4(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
  cout << "|     |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "|     |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::display(vector<unsigned int>& storageVector){
  if (storageVector[0] == 4 && storageVector[1] == 0 && storageVector[2] == 0) {
  Button::X4_Y0_Z0();
  }
  if (storageVector[0] == 3 && storageVector[1] == 1 && storageVector[2] == 0) {
  Button::X3_Y1_Z0();
  }
  if (storageVector[0] == 3 && storageVector[1] == 0 && storageVector[2] == 1) {
  Button::X3_Y0_Z1();
  }
  if (storageVector[0] == 2 && storageVector[1] == 2 && storageVector[2] == 0) {
  Button::X2_Y2_Z0();
  }
  if (storageVector[0] == 2 && storageVector[1] == 1 && storageVector[2] == 1) {
  Button::X2_Y1_Z1();
  }
  if (storageVector[0] == 2 && storageVector[1] == 0 && storageVector[2] == 2) {
  Button::X2_Y0_Z2();
  }
  if (storageVector[0] == 1 && storageVector[1] == 3 && storageVector[2] == 0) {
  Button::X1_Y3_Z0();
  }
  if (storageVector[0] == 1 && storageVector[1] == 2 && storageVector[2] == 1) {
  Button::X1_Y2_Z1();
  }
  if (storageVector[0] == 1 && storageVector[1] == 1 && storageVector[2] == 2) {
  Button::X1_Y1_Z2();
  }
  if (storageVector[0] == 1 && storageVector[1] == 0 && storageVector[2] == 3) {
  Button::X1_Y0_Z3();
  }
  if (storageVector[0] == 0 && storageVector[1] == 4 && storageVector[2] == 0) {
  Button::X0_Y4_Z0();
  }
  if (storageVector[0] == 0 && storageVector[1] == 3 && storageVector[2] == 1) {
  Button::X0_Y3_Z1();
  }
  if (storageVector[0] == 0 && storageVector[1] == 2 && storageVector[2] == 2) {
  Button::X0_Y2_Z2();
  }
  if (storageVector[0] == 0 && storageVector[1] == 1 && storageVector[2] == 3) {
  Button::X0_Y1_Z3();
  }
  if (storageVector[0] == 0 && storageVector[1] == 0 && storageVector[2] == 4) {
  Button::X0_Y0_Z4();
  }


}


Button::~Button() {

}
