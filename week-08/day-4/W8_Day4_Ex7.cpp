#include <iostream>
#include <string>

using namespace std;

string changeX_toY(string s, unsigned int size) { //here the size should be zero
  if (size == s.size()) {
    return s;
  }
  else {
    if (s[size] == 'x') {
      s[size] = 'y';
      return changeX_toY(s, size + 1);
    }
    else {
      return changeX_toY(s, size + 1);
    }
  }
}

string changeX_toY2(string s, unsigned int size) { //here the size may be the "real" size of the string
  if (size == 0) {
    if (s[size] == 'x') {
      s[size] = 'y';
      return s;
    }
    else {
      return s;
    }
  }
  else {
      if (s[size] == 'x') {
        s[size] = 'y';
        return changeX_toY2(s, size - 1);
      }
      else {
        return changeX_toY2(s, size - 1);
      }
  }
}

int main() {
string my_string = "xxxxxxax";
cout << changeX_toY(my_string, 0) << endl;
cout << changeX_toY2(my_string, 8) << endl;

if (changeX_toY(my_string, 0) == changeX_toY2(my_string, 8))
  cout << "Both version work!" << endl;

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

  return 0;
}
