#include <iostream>
#include <string>

using namespace std;

template <class T>
T add_first_to_third(T array[5]) {
  return array[0] + array[2];
}

template <class T>
T add_first_to_third_return_new(T array[5]) {
  array[2] += array[0];
  return 0;
}


int main() {
  int my_array[5] = {1, 2, 3, 4, 5};
  cout << "First and third element total: " << add_first_to_third(my_array) << endl;
  cout << "Array after first method (no change): " << endl;
  for (int i = 0; i < 5; i++)
    cout << my_array[i] << " ";
  cout << endl << "Array after second method: " << endl;
  add_first_to_third_return_new(my_array);
  for (int i = 0; i < 5; i++)
    cout << my_array[i] << " ";
	// create a function template that takes fix long array
	// and add the 1st element of it to the third

  return 0;
}
