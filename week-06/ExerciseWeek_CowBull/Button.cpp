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
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << endl;
}

void Button::X3_Y1_Z0(){
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << endl;
}

void Button::X3_Y0_Z1(){
  cout << "| XXX |" << " " << "| XXX |" << " " << "| XXX |" << " " << "|     |" << endl;
}

void Button::X2_Y2_Z0(){
  cout << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << endl;
}

void Button::X2_Y1_Z1(){
  cout << "| XXX |" << " " << "| XXX |" << " " << "| OOO |" << " " << "|     |" << endl;
}

void Button::X2_Y0_Z2(){
  cout << "| XXX |" << " " << "| XXX |" << " " << "|     |" << " " << "|     |" << endl;
}

void Button::X1_Y3_Z0(){
  cout << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << endl;
}

void Button::X1_Y2_Z1(){
  cout << "| XXX |" << " " << "| OOO |" << " " << "| OOO |" << " " << "|     |" << endl;
}

void Button::X1_Y1_Z2(){
  cout << "| XXX |" << " " << "| OOO |" << " " << "|     |" << " " << "|     |" << endl;
}

void Button::X1_Y0_Z3(){
  cout << "| XXX |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
}

void Button::X0_Y4_Z0(){
  cout << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << endl;
}

void Button::X0_Y3_Z1(){
  cout << "| OOO |" << " " << "| OOO |" << " " << "| OOO |" << " " << "|     |" << endl;
}

void Button::X0_Y2_Z2(){
  cout << "| OOO |" << " " << "| OOO |" << " " << "|     |" << " " << "|     |" << endl;
}

void Button::X0_Y1_Z3(){
  cout << "| OOO |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
}

void Button::X0_Y0_Z4(){
  cout << "|     |" << " " << "|     |" << " " << "|     |" << " " << "|     |" << endl;
}

void Button::button_up_down(){
  cout << "o-----o" << " " << "o-----o" << " " << "o-----o" << " " << "o-----o" << endl;
}

void Button::display(vector<unsigned int>& StorageVector){
  button_up_down();
  for (int i = 0; i < 2; i++) {
    if (StorageVector[0] == 4 && StorageVector[1] == 0 && StorageVector[2] == 0) {
    Button::X4_Y0_Z0();
    }
    if (StorageVector[0] == 3 && StorageVector[1] == 1 && StorageVector[2] == 0) {
    Button::X3_Y1_Z0();
    }
    if (StorageVector[0] == 3 && StorageVector[1] == 0 && StorageVector[2] == 1) {
    Button::X3_Y0_Z1();
    }
    if (StorageVector[0] == 2 && StorageVector[1] == 2 && StorageVector[2] == 0) {
    Button::X2_Y2_Z0();
    }
    if (StorageVector[0] == 2 && StorageVector[1] == 1 && StorageVector[2] == 1) {
    Button::X2_Y1_Z1();
    }
    if (StorageVector[0] == 2 && StorageVector[1] == 0 && StorageVector[2] == 2) {
    Button::X2_Y0_Z2();
    }
    if (StorageVector[0] == 1 && StorageVector[1] == 3 && StorageVector[2] == 0) {
    Button::X1_Y3_Z0();
    }
    if (StorageVector[0] == 1 && StorageVector[1] == 2 && StorageVector[2] == 1) {
    Button::X1_Y2_Z1();
    }
    if (StorageVector[0] == 1 && StorageVector[1] == 1 && StorageVector[2] == 2) {
    Button::X1_Y1_Z2();
    }
    if (StorageVector[0] == 1 && StorageVector[1] == 0 && StorageVector[2] == 3) {
    Button::X1_Y0_Z3();
    }
    if (StorageVector[0] == 0 && StorageVector[1] == 4 && StorageVector[2] == 0) {
    Button::X0_Y4_Z0();
    }
    if (StorageVector[0] == 0 && StorageVector[1] == 3 && StorageVector[2] == 1) {
    Button::X0_Y3_Z1();
    }
    if (StorageVector[0] == 0 && StorageVector[1] == 2 && StorageVector[2] == 2) {
    Button::X0_Y2_Z2();
    }
    if (StorageVector[0] == 0 && StorageVector[1] == 1 && StorageVector[2] == 3) {
    Button::X0_Y1_Z3();
    }
    if (StorageVector[0] == 0 && StorageVector[1] == 0 && StorageVector[2] == 4) {
    Button::X0_Y0_Z4();
    }
  }
  button_up_down();
}

Button::~Button() {

}
