#include <iostream>
#include <string>

using namespace std;

int recursive_sumdigits(unsigned int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return (n % 10) + recursive_sumdigits(n / 10);
  }
}

int main() {
  unsigned int num = 12345;
  cout << recursive_sumdigits(num);
  return 0;
}

// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
