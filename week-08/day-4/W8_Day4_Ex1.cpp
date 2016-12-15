#include <iostream>
#include <string>

using namespace std;

int recursive_countdown(int n) {
  if (n == 0) {
    return 1;
  }
  else {
    cout << n << " ";
    return recursive_countdown(n - 1);
  }
}

int main() {
  int num = 5;
  recursive_countdown(num);
  return 0;
}

// write a recursive function
// that takes one parameter: n
// and counts down from n

