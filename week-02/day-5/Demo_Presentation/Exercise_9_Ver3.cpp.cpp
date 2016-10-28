#include <iostream>
#include <string.h>

using namespace std;

int diamond(int row);

int main() {
  int linenumber;
  char answer;
  do {
  cout << "Please enter how many lines should have your diamond: ";
  cin >> linenumber;
  cout << endl;
    if (linenumber % 2 != 0) {
      diamond (linenumber);
      break;
    }
    else {
      cout << "You typed an even number, this will create an ugly diamond." << endl;
      cout << "Enter 'Y' to continue or 'X' to exit. Press any other key to start again.";
      cout << endl;
      cin >> answer;
      if (answer == 'Y')
        diamond (linenumber);
        break;
      }
    }while (answer != 'X');
  cout << "END";
  return 0;
}

int diamond(int row) {
  if (row % 2 == 0) {
    for(int i = 1; i <= row / 2; i++){
      for(int j = (row / 2 - 1); j >= i; j--)
        cout << " ";
      for(int k = 1; k <= i * 2 - 1; k++)
        cout <<"*";
      cout << endl;
      }
    for(int i = row / 2; i >= 0; i--){
      for(int j = row / 2 - 1; j >= i; j--)
        cout << " ";
      for(int k = 1; k <= i * 2 - 1; k++)
        cout <<"*";
      cout << endl;
      }
  }
  else {
    for(int i = 1; i <= row / 2 + 1; i++){
      for(int j = (row / 2); j >= i; j--)
        cout << " ";
      for(int k = 1; k <= i * 2 - 1; k++)
        cout <<"*";
      cout << endl;
      }
    for(int i = row / 2; i >= 0; i--){
      for(int j = (row / 2); j >= i; j--)
        cout << " ";
      for(int k = 1; k <= i * 2 - 1; k++)
        cout <<"*";
      cout << endl;
      }
    }
  return 0;
}

