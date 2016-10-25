#include <iostream>
#include <string>

using namespace std;

int returnindex(int array[], int len, int num) {
	for (int i = 0; i < len; i++){
		if (array[i] == num)
			return i;
	}
	return -1;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  int length = sizeof(numbers)/sizeof(int);
  int lookfor = 6;
  cout << returnindex(numbers, length, lookfor);

  // Write a function that takes ana array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)

  return 0;
}
