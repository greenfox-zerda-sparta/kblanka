/*
 * ToString.cpp
 *
 *  Created on: 2016. dec. 15.
 *      Author: Tecra_Z50
 */

#include "ToString.h"
#include <sstream>

using namespace std;

string ToString(int number) {
  stringstream ss;
  ss << number;
  return ss.str();
}

