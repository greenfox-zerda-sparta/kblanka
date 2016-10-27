#include <iostream>

using namespace std;

int main() {
  int high_number = 6655;
  int low_number = 2;

  int* high_number_pointer = &low_number;
  int* low_number_pointer = &high_number;

  cout << "first version:" << endl;
  cout << "high_number_pointer: " << high_number_pointer << endl;
  cout << "low_number_pointer: " << low_number_pointer << endl;

  int* temp = high_number_pointer;
  high_number_pointer = low_number_pointer;
  low_number_pointer = temp;

  cout << "second version:" << endl;
  cout << "high_number_pointer: " << high_number_pointer << endl;
  cout << "low_number_pointer: " << low_number_pointer << endl;

  // Please fix the problem and swap where the pointers point,
  // without using the "&" operator.

  return 0;
}
