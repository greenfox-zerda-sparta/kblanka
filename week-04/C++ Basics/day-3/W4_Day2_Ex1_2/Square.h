/*
 * Square.h
 *
 *  Created on: 2016. nov. 9.
 *      Author: Tecra_Z50
 */

#ifndef SQUARE_H_
#define SQUARE_H_
#include <iostream>
#include <string>

using namespace std;

class Square: public Shape {
public:
  Square();
  string* getName();
};

#endif
