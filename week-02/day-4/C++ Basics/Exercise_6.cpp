#include <iostream>
#include <string>

using namespace std;

int countfolloweven(int *array, int length) {
	int a = 0;
	for (int i = 0; i < length-1; i++) {
		if (array[i] % 2 == 0 && array[i+1] % 2 == 0)
			a = a + 1;
	}
	return a;
}

int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};
  int length = sizeof(numbers) / sizeof(int);
  cout << countfolloweven (numbers, length);

  // Write a function that counts how many times is an even number is followed by
  // another even number in an array

  return 0;
}
