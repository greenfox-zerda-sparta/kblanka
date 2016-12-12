#include <iostream>
using namespace std;

#define FALSE_TESTER(input) if(! (input) ) {cerr << "Invalid input" << endl;}

int main() {
  int a = 0;
  int b = 10;
  FALSE_TESTER(a > b);
	return 0;
}

// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.
