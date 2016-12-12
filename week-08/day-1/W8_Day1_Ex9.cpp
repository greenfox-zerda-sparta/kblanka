#include <iostream>
using namespace std;

#define PRINT_PARAM_FILE_LINE(x) {cout << "The parameter: " << x << " is called in " << "file: "  <<  __FILE__ << " and line: " << __LINE__ << "." << endl;}

int main() {
int a = 5;
PRINT_PARAM_FILE_LINE(a);
	return 0;
}

// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file
// and at which line it has been called at.
//

