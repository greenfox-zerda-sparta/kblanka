#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	for (a=0; a <= 100; a++) {
		if (a%3==0 && a%5==0)
			cout << "Fizzbuzz" << endl;
		else if (a%3==0)
			cout << "Fizz" << endl;
		else if (a%5==0)
			cout << "Buzz" << endl;
		else
			cout << a << endl;
	}

	// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".

	return 0;
}

