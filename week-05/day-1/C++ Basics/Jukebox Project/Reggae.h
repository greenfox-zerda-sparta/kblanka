/*
 * Reggae.h
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#ifndef REGGAE_H_
#define REGGAE_H_
#include "Song.h"
#include <iostream>
#include <string>

namespace std {

class Reggae : public Song {
public:
  Reggae();
  Reggae(string artist, string title);
  void set_rate(double add_rate);
  ~Reggae();
};
} /* namespace std */

#endif /* REGGAE_H_ */
