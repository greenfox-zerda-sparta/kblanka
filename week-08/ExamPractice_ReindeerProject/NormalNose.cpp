/*
 * NormalNose.cpp
 *
 *  Created on: 2016. dec. 15.
 *      Author: Tecra_Z50
 */
#include <string>
#include "NormalNose.h"

using namespace std;

NormalNose::NormalNose() : Reindeer(){
  this->type = "NormalNose";
  this->max_hay = 3;
  this->max_present_carry = 15;
}

NormalNose::~NormalNose() {

}
