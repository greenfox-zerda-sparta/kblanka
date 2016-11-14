/*
 * Song.cpp
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#include <iostream>
#include <string>
#include "Song.h"

namespace std {

Song::Song() {

}

string Song::get_artist() {
  return this->artist;
}

string Song::get_title() {
  return this->title;
}

string Song::get_genre() {
  return this->genre;
}

void Song::set_rate(double add_rate) {
  this->rate = this->rate + add_rate;
  this->count_rate++;
}

double Song::get_average_rate() {
  return (this->rate / this->count_rate);
}

Song::~Song() {

}

} /* namespace std */
