#include <iostream>
using namespace std;


int main() {
	int number = 1234;
	int* number_pointer = &number;
	cout << *number_pointer <<endl;
	// print the value of number using the "number_pointer"
	 return 0;
}
