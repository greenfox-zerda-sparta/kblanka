/*
 * Triangle.h
 *
 *  Created on: 2016. nov. 9.
 *      Author: Tecra_Z50
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
#include <string>

using namespace std;

class Triangle: public Shape {
public:
  Triangle();
  string* getName();
};

#endif
