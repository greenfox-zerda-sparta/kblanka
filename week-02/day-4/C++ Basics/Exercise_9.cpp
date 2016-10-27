#include <iostream>

using namespace std;

int diamond(int row) {
  for(int i = 0; i <= row; i++){
    for(int j = (row - 1); j >= i; j--)
      cout << " ";
    for(int k = 1; k <= i * 2 - 1; k++)
      cout <<"*";
    cout << endl;
    }
  for(int i = row - 1; i >= 0; i--){
    for(int j = (row - 1); j >= i; j--)
      cout << " ";
    for(int k = 1; k <= i * 2 - 1; k++)
      cout <<"*";
    cout << endl;
    }
  return 0;
}


int main() {
  diamond (5);

  // Create a function that takes a number and prints a diamond like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //
  // The diamond should have as many lines as the value in the argument

  return 0;
}
