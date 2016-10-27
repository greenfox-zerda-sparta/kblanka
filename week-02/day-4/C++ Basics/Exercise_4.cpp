#include <iostream>

using namespace std;

void reverseArray(int *array, int length) {
	//for(int i = 0; int j = length - 1; i < length / 2; i++, j--){
	for(int i = 0, j = length - 1; i < length / 2; i++, j--) {
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

void printArray(int *array, int length) {
	cout << "{";
	for (int i = 0; i < length; i++){
		cout << array[i];
		if (i < (length-1))
			cout << ",";
	}
	cout << "}";
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int length = sizeof(array) / sizeof(int);
  reverseArray (array, length);
  printArray (array, length);

  // Write a function that takes an array and its length than reverses the array

  return 0;
}
