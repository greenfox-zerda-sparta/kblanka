#include <iostream>
using namespace std;

#define MY_INT 10

int main() {
  cout << MY_INT << endl;
#undef MY_INT
#define MY_INT 1
  cout << MY_INT << endl;
#undef MY_INT
	return 0;
}

// Create a constatn using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.
