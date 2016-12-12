#include <iostream>
using namespace std;

#if defined __DEBUG
#define FALSE_TESTER2(input) if(! (input) ) {cout << "The parameter: " << (input) << " in line number " << __LINE__ << " in file " << __FILE__ << endl;}
#else
#define FALSE_TESTER2(input)
#endif

int main() {
  int b = 10;
  FALSE_TESTER2(b < 0);
  return 0;
}

// Take the function like macro from the previous exercise.
// Make it so, that it's defined like the way You wrote it
// when __DEBUG is defined.
// It's defined to be nothing otherwise.
