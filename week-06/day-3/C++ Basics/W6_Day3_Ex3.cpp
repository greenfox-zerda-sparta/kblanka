#include <iostream>
#include <string>

using namespace std;

template <class T>
T print_all(T array[], T length) {
  for (int i = 0; i < length; i++)
    cout << array[i] << " ";
  return 0;
}

int main() {
  int my_array[] = {1, 2, 3, 4, 5};
  print_all(my_array, 5);

  /*char my_array2[] = {'a','a', 'a', 'a', 'a'};
  print_all(my_array2, 5); here I should change to function length parameter to int*/

	// create a function template which takes in an array, and the size of it
	// print all the elements of the array

  return 0;
}
