#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int>& myVec) {
  for (vector<int>::iterator it = myVec.begin(); it != myVec.end(); it++) {
    cout << *it << endl;
  }
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  print_vector(v);

  return 0;
}

// create a function that prints a vector using iterators
