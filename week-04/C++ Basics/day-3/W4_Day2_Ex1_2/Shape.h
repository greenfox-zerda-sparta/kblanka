/*
 * Shape.h
 *
 *  Created on: 2016. nov. 9.
 *      Author: Tecra_Z50
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
  Shape();
  virtual string* getName();
  //virtual ~Shape();
};

#endif
