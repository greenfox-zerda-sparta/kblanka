#include <iostream>
#include <string>

using namespace std;

int bunny_ears(unsigned int rabbit_num) {
  if (rabbit_num == 0) {
    return 0;
  }
  else {
    return 2 + bunny_ears(rabbit_num - 1);
  }
}

int main() {
  unsigned int mybunnies = 10;
  cout << bunny_ears(mybunnies);

  return 0;
}

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).
