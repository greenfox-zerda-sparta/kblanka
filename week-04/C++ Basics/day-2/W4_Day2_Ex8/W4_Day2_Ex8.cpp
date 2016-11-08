#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

int main() {
  Pirate myPirate = Pirate();
  cout << myPirate.get_drunktime() << endl;

  myPirate.drink_rum();
  myPirate.drink_rum();
  myPirate.drink_rum();
  myPirate.drink_rum();
  myPirate.drink_rum();

  cout << myPirate.get_drunktime() << endl;

  cout << myPirate.hows_goin_mate();

    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  return 0;
}
