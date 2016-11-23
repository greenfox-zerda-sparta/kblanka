#include <iostream>
#include <string>

using namespace std;

template <class FIRST, class SECOND>
FIRST more_bytes(FIRST a, SECOND b) {
  return (sizeof(a) > sizeof(b) ? a : b);
}

int main() {
  int one = 424;
  char two = 't';
  //cout << sizeof(one) << " " << sizeof(two) << endl;
  cout << "Stored in more byte: " << more_bytes(one, two);

  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then

  return 0;
}
