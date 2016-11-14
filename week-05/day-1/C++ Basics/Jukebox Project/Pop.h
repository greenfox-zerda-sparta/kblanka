/*
 * Pop.h
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#ifndef POP_H_
#define POP_H_
#include "Song.h"
#include <iostream>
#include <string>

namespace std {

class Pop : public Song {
public:
  Pop();
  Pop(string artist, string title);
  void set_rate(double add_rate);
  ~Pop();
};

} /* namespace std */

#endif /* POP_H_ */
