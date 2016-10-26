#include <iostream>
using namespace std;


int main() {
	 int number = 1234;
	 int* number_pointer = &number;
	 *number_pointer = 42;

	 cout << "This is the value: " << number << endl;
	 cout << "This is the pointer: " << *number_pointer;

	 // update the value of number variable to 42 using the "number_pointer"

	 return 0;
}
