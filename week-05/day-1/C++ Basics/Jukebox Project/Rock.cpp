/*
 * Rock.cpp
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#include <iostream>
#include <string>
#include "Rock.h"

namespace std {

Rock::Rock() {

}

Rock::Rock(string artist, string title) {
  this->artist = artist;
  this->title = title;
  this->genre = "Rock";
};

void Rock::set_rate(double add_rate) {
  if (add_rate <= 5 && add_rate > 1) {
    this->rate = this->rate + add_rate;
    this->count_rate++;
  }
  else
    cout << "You had a false input: Rate can be only between 2 and 5." << endl;
}

Rock::~Rock() {

}

} /* namespace std */
