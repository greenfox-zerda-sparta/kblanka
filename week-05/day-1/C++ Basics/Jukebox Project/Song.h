/*
 * Song.h
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#ifndef SONG_H_
#define SONG_H_

#include <iostream>
#include <string>

namespace std {

class Song {
protected:
  string artist;
  string title;
  string genre;
  double rate;
  double count_rate;
  double add_rate;
  float rate_sum;
  float rate_count;
public:
  Song();
  string get_artist();
  string get_title();
  string get_genre();
  double get_average_rate();
  void set_rate(double add_rate);
  float get_rate_sum();
  float get_rate_count();
  ~Song();
};

} /* namespace std */

#endif /* SONG_H_ */
