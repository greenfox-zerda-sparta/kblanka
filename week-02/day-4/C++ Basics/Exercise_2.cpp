#include <iostream>

using namespace std;

void fillArray (int *array, int length) {
	for (int i = 0; i < length; i++)
		array[i] = i;
}

void printArray(int *array, int length) {
	cout << "{";
	for (int j = 0; j < length; j++){
		cout << array[j];
		if (j < (length - 1))
			cout << ",";
	}
	cout << "}";
}

int main() {
  int array[10];
  fillArray (array, 10);
  printArray (array, 10);

  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length

  return 0;
}
