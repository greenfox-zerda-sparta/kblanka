#include <iostream>

using namespace std;

int negativeornot(int *array, int length) {
	bool b = true;
	for (int i = 0; i < length; i++)
		if (array[i] < 0)
		b = false;
	return b;
}

int main() {
  int numbers[] = {6, -5, 3, 4, 1, 8, -7};
  int length = sizeof(numbers) / sizeof(int);
  if (negativeornot (numbers, length))
	cout << "Sorry, all of your numbers are positive.";
  else
	cout << "Hey, I found at least one negative number!";

  // Write a function that decides if an array includes at least one negative number or not

  return 0;
}
