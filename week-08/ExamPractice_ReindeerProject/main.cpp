//============================================================================
// Name        : Reindeer_Project.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "ToString.h"
#include "RedNose.h"
#include "NormalNose.h"
#include "Stall.h"

using namespace std;

int main() {

/*Test Reindeer.cpp:
 * unsigned int n = 100;
RedNose Rudolf;
Rudolf.feed_reindeer(n);
Rudolf.add_present(n);
cout << Rudolf.getStatus() << endl;

NormalNose Liza;
Liza.feed_reindeer(n);
Liza.add_present(n);
Liza.go_to_work();
cout << Liza.getStatus() << endl;
*/

  Stall first("Christmas Stall", 100, 50);
  try {
    first.add_reindeer("RedNose");
    first.add_reindeer("RedNose");
    first.add_reindeer("NormalNose");
  }
  catch (const char*) {
    cout << "Error messsage:" ;
  }

  first.feed_all_reindeer();

  try {
    first.add_present_to_reindeers();
  }
  catch (const char*) {
    cout << "Error messsage:" ;
  }

  cout << first.getStatus() << endl;

  first.christmas_time();
  first.christmas_time();
  first.christmas_time();

  cout << first.getStatus() << endl;

	return 0;
}
