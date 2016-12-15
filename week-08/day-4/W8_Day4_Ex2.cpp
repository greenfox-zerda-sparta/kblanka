#include <iostream>
#include <string>

using namespace std;

int recursive_add(int n) {
  if (n == 1) {
    return 1;
  }
  else {
    return n + recursive_add(n - 1);
  }
}

int main() {
  int num = 3;
  cout << recursive_add(num);
  return 0;
}

// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n
