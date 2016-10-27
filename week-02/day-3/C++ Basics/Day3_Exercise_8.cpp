#include <iostream>

using namespace std;

int main() {
  int high_number = 2;
  int low_number = 6655;

  int* high_number_pointer = &high_number;
  int* low_number_pointer = &low_number;

  cout << "first version:" << endl;
  cout << "high_number: " << high_number << endl;
  cout << "low_number: " << low_number << endl;

  int temp = *high_number_pointer;
  *high_number_pointer = *low_number_pointer;
  *low_number_pointer = temp;

  cout << "second version:" << endl;
  cout << "high_number: " << high_number << endl;
  cout << "low_number: " << low_number << endl;

  // Please fix the problem and swap the value of the variables,
  // without using the "high_number" and the "low_number" variables.

  return 0;
}
