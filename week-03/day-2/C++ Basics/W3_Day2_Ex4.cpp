#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

int allgold(Pirate array[], int length) {
  int sumgold = 0;
  for (int i = 0; i < length; i ++)
    sumgold = sumgold + array[i].gold_count;
  cout << "Total gold of the pirates: " << sumgold << endl;
  return sumgold;
}

int averagegold(Pirate array[], int length) {
  int sumgold = 0;
  for (int i = 0; i < length; i ++)
    sumgold = sumgold + array[i].gold_count;
  cout << "Average gold of the pirates: " << sumgold / length << endl;
  return sumgold / length;
}

string richestlegless(Pirate array[], int length) {
  int biggest = 0;
  string richest;
  for (int i = 0; i < length; i++) {
    if (array[i].gold_count >= biggest && array[i].has_wooden_leg == true) {
      biggest = array[i].gold_count;
      richest = array[i].name;
    }
  }
  return richest;
}

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };

  allgold(pirates, 6);
  averagegold(pirates, 6);
  cout << richestlegless(pirates, 6);

    return 0;
}

