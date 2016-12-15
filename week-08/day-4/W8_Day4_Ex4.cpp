#include <iostream>
#include <string>

using namespace std;

int powerN(unsigned int base, unsigned int n) {
  if (n == 0) {
    return 1;
  }
  else {
    cout << base << " * " << n << endl;
    return base * powerN(base, n - 1);
  }
}

int main() {
  unsigned int num1 = 5;
  unsigned int num2 = 3;

  cout << powerN(num1, num2);

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

  return 0;
}
