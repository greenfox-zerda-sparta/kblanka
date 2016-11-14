/*
 * Reggae.cpp
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#include <iostream>
#include <string>
#include "Reggae.h"

namespace std {

Reggae::Reggae() {

}

Reggae::Reggae(string artist, string title) {
  this->artist = artist;
  this->title = title;
  this->genre = "Reggae";
};

void Reggae::set_rate(double add_rate) {
  if (add_rate < 5 && add_rate >= 1) {
    this->rate = this->rate + add_rate;
    this->count_rate++;
  }
  else
    cout << "You had a false input: Rate can be only between 1 and 4." << endl;
}

Reggae::~Reggae() {

}

} /* namespace std */
