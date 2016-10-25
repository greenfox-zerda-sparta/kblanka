#include <iostream>
#include <string>

using namespace std;

void greet (string name) {
  cout << "Welcome " << name << "!";
}

int main() {
  string i = "Jozsi";
  greet (i);

  // create a function that takes a string argument and greets it.

  return 0;
}
