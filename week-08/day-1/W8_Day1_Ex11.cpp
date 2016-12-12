#include <iostream>
using namespace std;

#define FALSE_TESTER2(input) if(! (input) ) {cout << "The parameter: " << (input) << " in line number " << __LINE__ << " in file " << __FILE__ << endl;}

int main() {
  int b = 10;
  FALSE_TESTER2(b < 0);
	return 0;
}

// Create a function like macro that takes one argument.
// If the argument is false, it should print out the following:
// The expression in the argument. And the file name and the line in the file.
