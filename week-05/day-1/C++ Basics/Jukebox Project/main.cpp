//============================================================================
// Name        : W5_Day1_Ex1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Song.h"
#include "Pop.h"
#include "Rock.h"
#include "Reggae.h"
#include "Jukebox.h"

using namespace std;

int main() {
  Pop* sting = new Pop("Sting", "Sun");

  Jukebox jukebox;
  jukebox.add_song(*sting);
  jukebox.rate(*sting, 1);
  jukebox.rate(*sting, 3);
  jukebox.rate(*sting, 5);
  cout << "Average rate for " << sting->get_title() << " from the artist " << sting->get_artist() << " is " << sting->get_average_rate() << "." << endl;
  cout << "Artist Rate - Sting: " << jukebox.get_artist_rate("Sting") << endl;
  cout << "Genre Rate - Pop:  " << jukebox.get_genre_rate("Pop") << endl;

  delete sting;
  cout << endl;

  Rock* rea = new Rock("Chris Rea", "Moon");

  jukebox.add_song(*rea);
  jukebox.rate(*rea, 1);
  jukebox.rate(*rea, 3);
  jukebox.rate(*rea, 5);

  cout << "Average rate for " << rea->get_title() << " from the artist " << rea->get_artist() << " is " << rea->get_average_rate() << "." << endl;
  cout << "Artist Rate - Chris Rea: " << jukebox.get_artist_rate("Chris Rea") << endl;
  cout << "Genre Rate - Rock: " << jukebox.get_genre_rate("Rock") << endl;

  delete rea;
  cout << endl;

  Reggae* marley = new Reggae("Bob Marley", "Stars");
  cout << "Artist: " << marley->get_artist() << endl;
  cout << "Title: " << marley->get_title() << endl;
  cout << "Genre: " << marley->get_genre() << endl;
  marley->set_rate(3);
  marley->set_rate(4);
  marley->set_rate(2);
  cout << "Average rate: " << marley->get_average_rate() << endl;
  delete marley;
  cout << endl;

	return 0;
}
