#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

void carstats(Car mycar) {
  if (mycar.type != TESLA)
    cout << /* mycar.type << " " <<*/  "KM: " << mycar.km << " " << "GAS: " << mycar.gas << endl;
  else
    cout << /* mycar.type << " " <<*/ "KM: " << mycar.km << endl;
}

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main() {

  Car Toyota;
  Toyota.type = TOYOTA;
  Toyota.km = 120;
  Toyota.gas = 140;

  Car Tesla;
  Tesla.type = TESLA;
  Tesla.km = 120;
  Tesla.gas = 140;

  carstats(Tesla);
}
