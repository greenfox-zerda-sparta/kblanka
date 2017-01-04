/*
 * Reindeer.cpp
 *
 *  Created on: 2016. dec. 15.
 *      Author: Tecra_Z50
 */
#include <string>
#include "Reindeer.h"
#include "ToString.h"

using namespace std;

//TODO
//Feed the reindeers: add hay (refill)
//Presentcarry skill: how much present they can carry?
//Eating skill: how much do they eat?
//Get a list with the available reindeers: get_status

Reindeer::Reindeer() {
  hay = 0;
  max_hay = 0;
  type = "";
  max_present_carry = 0;
  present = 0;
}

void Reindeer::feed_reindeer(unsigned int& hay_storage) { //kell ide kukac?
  unsigned int needed_hay = max_hay - hay; //itt kiszámolom, hogy mennyi széna kell neki, a max_hay a gyomra
  if (hay_storage >= needed_hay) { //ha az elérhető mennyiség nagyobb vagy egyenlő, mint amennyi kell
    hay += needed_hay; //akkor a szénához, ami van neki, hozzádom azt, amennyi kell neki
    hay_storage -= needed_hay; //az elérhető szénából kivonom azt, amit elhasználtam
  }
  else {
    hay += needed_hay;
    hay_storage = 0;
  }
}

void Reindeer::add_present(unsigned int& present_storage) {
  unsigned int needed_present = max_present_carry - present;
  if (present_storage >= needed_present) {
    present += needed_present;
    present_storage -= needed_present;
  }
  else {
    present += needed_present;
    present_storage = 0;
  }
}

string Reindeer::getType() {
  return type;
}

string Reindeer::getStatus() {
  return "Reindeer type: " + type + ", Max Hay: " + ToString(max_hay) + ", Actual hay level: " + ToString(hay) + ", "
      "Max Present Num: " + ToString(max_present_carry) + ", Actual present level: " + ToString(present);
}

void Reindeer::go_to_work() {
  present = 0;
  hay = 0;
}

Reindeer::~Reindeer() {

}

