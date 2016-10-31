#include <iostream>
using namespace std;

bool includes(int array[], int length, int num){
  bool a = false;
  for (int i = 0; i < length; i++){
    if (array[i] == num)
      a = true;
  }
  return a;
}

int firstIndexof(int array[], int length, int num){
  for (int i = 0; i < length; i++){
    if (array[i] == num)
      return i;
  }
  return -1;
}

int lastIndexof(int array[], int length, int num){
  for (int i = length - 1; i >= 0; i--){
    if (array[i] == num)
      return i;
  }
  return -1;
}

//Create a function to tell You whether a certain number is part of a 10 long array of integers.
//Create an other function to give You the first index of a given integer in an array of integers.
//Create an other functions to give You the index of the last occurrence of the given integer in
//the array.If the array does not include the given integer this function should return -1.
//Do not duplicate functionality, use the functions You've created earlier instead of duplicating.
//Create 5 arrays, each 10 long filled with integers.
//Find the first and last occurrances of the integer: 14. And Print them out. If the array does not
//include the integr You should say so in words.
//The names of the functions should be "includes", "firstIndexOf", "lastIndexOf"
//Decide what should the function return. Void? Bool? Int? Float? Char?

int main(int argc, char** argv){
  int array1[10] = {1, 3, 4, 5, 2, 0, 10, 4, 2, 33};
  if (includes(array1, 10, 2))
    cout << "Found yout number in the array" << endl;
  else
    cout << "Not found yout number in the array" << endl;
  cout << endl;
  cout << firstIndexof(array1, 10, 2);
  cout << endl;
  cout << lastIndexof(array1, 10, 2);

	return 0;
}
