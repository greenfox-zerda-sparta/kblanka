#include <iostream>

using namespace std;

int main() {
  int numbers[] = {5, 6, 7, 8, 9};
  int* number_pointer = &numbers[0];
  *number_pointer = numbers[2];
  cout << "The value: " << *number_pointer << ", the address: " << number_pointer << ".";
  // The "number_pointer" should point to the third element of the array called "numbers",
  // than please print its value with it. Solve the problem without reusiong the "&" operator
  // for geting the address of the third element.
  return 0;
}
