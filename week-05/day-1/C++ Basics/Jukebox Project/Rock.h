/*
 * Rock.h
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#ifndef ROCK_H_
#define ROCK_H_
#include "Song.h"
#include <iostream>
#include <string>

namespace std {

class Rock : public Song {
public:
  Rock();
  Rock(string artist, string title);
  void set_rate(double add_rate);
  ~Rock();
};

} /* namespace std */

#endif /* ROCK_H_ */
