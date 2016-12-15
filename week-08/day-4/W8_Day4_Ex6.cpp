#include <iostream>
#include <string>

using namespace std;

int antlers_counter(unsigned int reindeer_num) {
  if (reindeer_num == 0) {
    return 0;
  }
  else {
    int antlers_sum = 0;
    if (reindeer_num % 2 == 0) {
      antlers_sum = 2 + antlers_counter(reindeer_num - 1);
    }
    else {
      antlers_sum = 3 + antlers_counter(reindeer_num - 1);
    }
    return antlers_sum;
  }
}

int main() {
  int my_reindeers = 3;
  cout << antlers_counter(my_reindeers);

// We have reindeers standing in a line, numbered 1, 2, ... The odd reindeers
// (1, 3, ..) have the normal 2 antlers. The even reindeers (2, 4, ..) we'll say
// have 3 antlers, because they each have a raised branch (how funny they are, arent they?).
// Recursively return the number of "antlers" in the reindeer line 1, 2, ... n (without loops or
// multiplication).

  return 0;
}
