#include <iostream>
using namespace std;

#define PRINTER_FUNCNAME {cout << __PRETTY_FUNCTION__ << endl;}
#define PRINTER_PARAM(x) {cout << "Parameter: " << x << endl;}

int main() {
  int x = 10;
  PRINTER_FUNCNAME;
  PRINTER_PARAM(x);
	return 0;
}


// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.
