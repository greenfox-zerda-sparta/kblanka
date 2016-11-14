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

float Jukebox::get_artist_rate(string artist) {
  if (songs != 0) {
    int rate_sum = 0;
    int rate_count = 0;
    for (int i = 0; i < song_counter; i++) {
      if (songs[i]->get_artist() == artist) {
        rate_sum = songs[i]->get_rate_sum() + rate_sum;
        rate_count = songs[i]->get_rate_count() + rate_count;
      }
    }
    return (float) rate_sum / rate_count;
      }else{
  return 0;
      }
}

float Jukebox::get_genre_rate(string genre) {
  int rate_sum = 0;
  int rate_count = 0;
  for (int i = 0; i < song_counter; i++) {
    if (songs[i]->get_genre() == genre) {
      rate_sum = songs[i]->get_rate_sum() + rate_sum;
      rate_count = songs[i]->get_rate_count() + rate_count;
    }
  }
  return (float) rate_sum / rate_count;
}

Jukebox::~Jukebox() {

}

} /* namespace std */
