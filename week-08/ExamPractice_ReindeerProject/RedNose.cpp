/*
 * RedNose.cpp
 *
 *  Created on: 2016. dec. 15.
 *      Author: Tecra_Z50
 */
#include <string>
#include "RedNose.h"

using namespace std;

RedNose::RedNose() : Reindeer() {
  this->type = "RedNose";
  this->max_hay = 5;
  this->max_present_carry = 30;
  this->health_status = 15;
}

RedNose::~RedNose() {

}
