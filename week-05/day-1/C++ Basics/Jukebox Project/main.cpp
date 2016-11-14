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

  /*cout << "Artist: " << sting->get_artist() << endl;
  cout << "Title: " << sting->get_title() << endl;
  cout << "Genre: " << sting->get_genre() << endl;
  sting->set_rate(1);
  sting->set_rate(3);
  sting->set_rate(5);
  cout << "Average rate: " << sting->get_average_rate() << endl;
  */

// JUKEBOX START

  Jukebox sting_jukebox;
  sting_jukebox.add_song(*sting);
  sting_jukebox.rate(*sting, 1);
  sting_jukebox.rate(*sting, 3);
  sting_jukebox.rate(*sting, 5);
  cout << "Average rate for " << sting->get_title() << " from the artist " << sting->get_artist() << " is " << sting->get_average_rate() << "." << endl;

// JUKEBOX END

  delete sting;
  cout << endl;

  Rock* rea = new Rock("Chris Rea", "Moon");
  cout << "Artist: " << rea->get_artist() << endl;
  cout << "Title: " << rea->get_title() << endl;
  cout << "Genre: " << rea->get_genre() << endl;
  rea->set_rate(1);
  rea->set_rate(2);
  rea->set_rate(2);
  cout << "Average rate: " << rea->get_average_rate() << endl;
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
