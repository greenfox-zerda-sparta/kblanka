#include <iostream>

using namespace std;

int* print_array(int* array, int size){
  for(int i = 0; i < size; i+=2){
    cout << array[i] << " | ";
  }
  return array;
}

int* create_array(int size) {
  int* new_array = new int[size];
  for(int i = 0; i < size; i++) {
    new_array[i] = i;
  }
  print_array(new_array, size);
  return new_array;
}

int* resize(int* array, int size, int new_size) {
  int* new_array = new int[new_size];
  for (int i = 0; i < new_size; i++)
    if (i < size) {
      new_array[i] = array[i];
    }
    else {
      new_array[i] = 0;
    }
  delete[] array;
  array = NULL;
  return new_array;
}

int* filter_greater_than_5(int* array, int size) {
  int new_size = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] > 5)
      new_size++;
  }
  int* new_array = new int[new_size];
  int j = 0;
  for(int i = 0; i < size; i++) {
    if (array[i] > 5) {
      new_array[j] = array[i];
      j++;
    }
  }
  new_array = resize(new_array, size, new_size);
  print_array(new_array, new_size);
  delete[] array;
  array = NULL;
  return new_array;
}

/**
 * Create a function called "fliter_greater_than_5" that takes a pointer to an int array, and it's size.
 * It should return a pointer to a new array that only consists the numbers that are bigger than 5.
 */

int main() {
  int length = 30;
  int* array = create_array(length);
  cout << endl;
  int* new_array = filter_greater_than_5(array, length);
  delete[] array;
  delete[] new_array;
  array = NULL;
  new_array = NULL;
  return 0;
}
