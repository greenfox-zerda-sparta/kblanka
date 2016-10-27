#include <iostream>

using namespace std;

int halftree(int row) {
    for(int i = 0; i <= row; i++){
        for(int j = 0; j <= i; j++){
           cout << "*";
        }
        cout << endl;
    }
    return 0;
}


int main() {
	halftree (15);

  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument

  return 0;
}
