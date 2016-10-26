#include <iostream>

using namespace std;

int main() {
  int high_number = 6655;
  int low_number = 2;

  int* high_number_pointer = &high_number;
  int* other_high_number_pointer = high_number_pointer;

  cout << "high_number_pointer's memory address: " << high_number_pointer << endl;
  cout << "other_high_number_pointer's memory address: " << other_high_number_pointer << endl;

  // The "other_high_number_pointer" should point to the same memory address
  // without using the "&" operator.

  return 0;
}
