#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

int all_gold(Pirate array[], int length) {
  int sumgold = 0;
  for (int i = 0; i < length; i ++)
    sumgold = sumgold + array[i].gold_count;
  return sumgold;
}

float average_gold(Pirate array[], int length) {
  int sumgold = 0;
  for (int i = 0; i < length; i ++)
    sumgold = sumgold + array[i].gold_count;
  return (float)sumgold / (float)length;
}

string find_richest_legless(Pirate array[], int length) {
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

  cout << "Total gold of the pirates: " << all_gold(pirates, 6) << endl;
  cout << "Average gold of the pirates: " << average_gold(pirates, 6) << endl;
  cout << "The richest pirate with wooden leg: " << find_richest_legless(pirates, 6) << endl;

    return 0;
}

