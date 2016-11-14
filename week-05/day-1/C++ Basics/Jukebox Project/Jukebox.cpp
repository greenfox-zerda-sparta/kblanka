/*
 * Jukebox.cpp
 *
 *  Created on: 2016. nov. 14.
 *      Author: Tecra_Z50
 */

#include "Jukebox.h"
#include <iostream>
#include <string>

namespace std {

Jukebox::Jukebox() {
  songs = NULL;
  song_counter = 0;
}

void Jukebox::add_song(Song& song) {
  Song** temp = new Song*[song_counter + 1];
  if (songs != NULL) {
    for (int i = 0; i < song_counter; ++i) {
      temp[i] = songs[i];
    }
  }
  temp[song_counter] = &song;
  delete[] songs;
  songs = temp;
  song_counter++;
}

void Jukebox::rate(Song& song, double rate) {
    song.set_rate(rate);
}

Jukebox::~Jukebox() {

}

} /* namespace std */
