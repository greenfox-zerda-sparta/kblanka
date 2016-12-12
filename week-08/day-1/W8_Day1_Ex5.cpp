#include <iostream>
using namespace std;

#define str(a) #a

#if defined __DEBUG
#define MESSAGE cout << "DEBUG: " << str(a)
#else
#define MESSAGE cout << "RELEASE: " << str(a)
#endif

int main() {
  MESSAGE;
	return 0;
}

// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.
