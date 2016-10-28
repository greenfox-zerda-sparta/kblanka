#include <iostream>

using namespace std;

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


int main() {
  int linenumber;
  cout << "Please enter how many lines should have you diamond: ";
  cin >> linenumber;
  diamond (linenumber);
  return 0;
}
