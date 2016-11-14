/*
 * Jukebox.h
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#ifndef JUKEBOX_H_
#define JUKEBOX_H_
#include "Song.h"
#include <iostream>
#include <string>

namespace std {

class Jukebox {
public:
  Jukebox();
  void add_song(Song& song);
  void rate(Song& song, double rate);
  float get_artist_rate(string artist);
  float get_genre_rate(string genre);
  ~Jukebox();
private:
  Song** songs;
  int song_counter;
};

} /* namespace std */

#endif /* JUKEBOX_H_ */
