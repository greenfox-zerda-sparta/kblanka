#include <iostream>
#include <string>

using namespace std;

template <class T, class P>
double sum_of(T array[], P length) {
  T sum = 0;
  for(int i = 0; i < length; i++) {
    sum += array[i];
  }
  return sum;
}

template <>
double sum_of<char, int> (char arr[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += arr[i] - 'a';
  }
  return sum;
}

int main() {
  int my_array[] = {1, 2, 3, 4, 5};
  int length = sizeof(my_array) / sizeof(my_array[0]);
  cout << sum_of(my_array, length) << endl;

  char* abc = "abcdefghijklmnopqrstuvwxyz";
  /*int char_length = sizeof(abc) / sizeof(*abc);
  cout << char_length << endl; this is not working, but how to count the element of char*?*/
  cout << sum_of(abc, 26);

  // Create a function template that takes an array, and its length and return the sum of it elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
  return 0;
}


