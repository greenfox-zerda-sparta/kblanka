#include <iostream>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {
int a = 11;

  try {
  if (a % 2 != 0)
    throw 10;
  }catch(int y) {
    cout << "Error number: " << y << endl;
  }

  try {
  if (a % 2 != 0)
    throw runtime_error("This is an odd number.");
  }catch(runtime_error &error) {
    cout << "Exception occured" << endl;
    cout << error.what() << endl;
  }

	return 0;
}
