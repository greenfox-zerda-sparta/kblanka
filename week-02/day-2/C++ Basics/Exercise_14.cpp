#include <iostream>
#include <string>

using namespace std;

int arraymin(int array[], int length) {
	int small = array[0];
	for (int i = 0; i < length; i++){
		if (array[i] < small){
			small = array[i];
		}
	}
	return small;
}

int main() {
  int numbers[] = {7, 5, 8, -4, 2};
  int length = sizeof(numbers)/sizeof(int);
  cout << arraymin (numbers, length);

  // Write a function that takes ana array and its length returns the minimal element
  // in the array (your own min function)

  return 0;
}

