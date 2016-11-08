/*
 * Pirate.cpp
 *
 *  Created on: 2016. nov. 8.
 *      Author: Tecra_Z50
 */
#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

Pirate::Pirate() {
  drunktime = 0;
}

int Pirate::get_drunktime() {
  return drunktime;
  }

int Pirate::drink_rum() {
  return drunktime = drunktime + 1;
  }

string Pirate::hows_goin_mate() {
  if(drunktime >= 5)
    return "ARRRR!";
  else
    return "Nothin";
  }
