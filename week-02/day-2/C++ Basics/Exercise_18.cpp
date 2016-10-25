#include <iostream>
using namespace std;

int evenarray(int array [], int len) {
	int a = 0;
	for (int i = 0; i < len; i++){
		if (array[i] % 2 == 0)
			a = a + 1;
		}
	return a;
}

int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5};
  int length = sizeof(numbers)/sizeof(int);
  cout << evenarray (numbers, length);

  // create a function that takes an array and it's length as an agrument
  // and returns a number that states how many even numbers are in the array

	return 0;
}
