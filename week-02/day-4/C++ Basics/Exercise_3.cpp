#include <iostream>

using namespace std;

void swap(int *p1, int *p2) {
	cout << "Original: " << endl;
	cout << "first address: " << p1 << " second address: " << p2 << endl;
	cout << "first value: " << *p1 << " second value: " << *p2 << endl;

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	cout << "After swap: " << endl;
	cout << "first address: " << p1 << " second address: " << p2 << endl;
	cout << "first value: " << *p1 << " second value: " << *p2 << endl;
}

int main() {
  int first = 12;
  int second = 54;

  swap (&first, &second);

  // Write a function that takes two int pointers and swaps the values where the pointers point

  return 0;
}
