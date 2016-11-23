#include <iostream>
#include <string>

using namespace std;

template <class T>
T first_element(T array[5]) {
  return array[0];
}
int main() {
  int my_array[5] = {1, 2, 3, 4, 5};
  cout << first_element(my_array);

	// create a function template the takes in a fix long array and prints the 1st element of it
  return 0;
}
