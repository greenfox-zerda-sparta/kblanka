#include <iostream>

using namespace std;

int* resize(int* array, int size, int new_size) {
  int* new_array = new int[new_size];

  for (int i = 0; i < size; i++) {
    cout << array[i] << " | ";
  }
  cout << endl;

  for (int i = 0; i < new_size; i++)
    if (i < size) {
      new_array[i] = array[i];
    }
    else {
      new_array[i] = 0;
    }

  for (int i = 0; i < new_size; i++) {
    cout << new_array[i] << " | ";
  }
  delete[] array;
  array = NULL;
  return new_array;
}

int main() {
  int* myarray = new int[3];
  int new_size = 10;
  for (int i = 0; i < 6; i++) {
    myarray[i] = i;
  }
  resize(myarray, 3, new_size);
  delete[] myarray;
  myarray = 0;
  return 0;
}

/**
 * Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
 * then it should return a new pointer that points to the new resized array.
 * It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
 * It should delete the old array.
 */
