#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define MY_PI 3.14

void fill_array_random(int array[], int size) {
  srand (time(NULL));
  for (int i = 0; i < size; i++){
    int b = rand() % 10;
    array[i] = b;
  }
}

void print_array(int array[], int size) {
  cout << "The random numbers are: ";
  for (int i = 0; i < 5; i++)
    cout << array[i] << " ";
}

int main() {
int my_array[5];
fill_array_random(my_array, 5);
print_array(my_array, 5);
cout << endl << endl;

for (int i = 0; i < 5; i++)
  cout << "The circumference of the " << i + 1 << ". circle: " << (2 * my_array[i] * MY_PI) << endl;

	return 0;
}

// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in th calculations.
