#include <iostream>
#include <cmath>

using namespace std;

int* range(int from, int to, int step) {
  float size = (to - from) / step;
  int roundedsize = ceil(size);
  int* array = new int[roundedsize];
  for (int j = 0; j <= roundedsize; j++) {
    array[j] = from;
    from = from + step;
  }
return array;
}

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's paramters.
 * It should take 3 paramters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 3, 4, 5, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  int from = 4;
  int to = 19;
  int step = 4;
  float size = (to - from) / step;
  int roundedsize = ceil(size);

  int* array = range(from, to, step);
  for (int i = 0; i <= roundedsize; i++) {
    cout << array[i] << endl;
  }

  delete[] array;

  return 0;
}
