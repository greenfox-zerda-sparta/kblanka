/*
 * Pirate.h
 *
 *  Created on: 2016. nov. 8.
 *      Author: Tecra_Z50
 */

#ifndef PIRATE_H_
#define PIRATE_H_

#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

class Pirate {
public:
  Pirate();
  int get_drunktime();
  int drink_rum();
  string hows_goin_mate();
private:
  int drunktime;
};

#endif /* PIRATE_H_ */
