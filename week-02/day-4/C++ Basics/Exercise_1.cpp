#include <iostream>
#include <string>

using namespace std;

void squareArray (int *array, int length) {
	for (int a = 0; a < length; a++)
		array[a] = array[a] * array[a];
}

void printArray(int *array, int length) {
	cout << "{";
	for(int i = 0; i < length; i++){
		cout << array[i];
		if(i < length - 1) {
			cout << ", ";
		}
	}
	cout << "}" << endl;
}

int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int length = sizeof(array) / sizeof(int);
  cout << "This is the original array: ";
  printArray (array, length);
  squareArray (array, length);
  cout << "This is the squared array: ";
  printArray (array, length);

  return 0;
}
