#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string removeCharsFromString(string &str, char charsToRemove, unsigned int strlen) {
  if (strlen == 0) {
    if (str[strlen] == charsToRemove) {
      str.erase(remove(str.begin(), str.end(), charsToRemove), str.end());
      return str;
    }
    else {
      return str;
    }
  }
  else {
   if (str[strlen] == charsToRemove) {
     str.erase(remove(str.begin(), str.end(), charsToRemove), str.end());
     return removeCharsFromString(str, 'x', (strlen - 1));
   }
   else {
     str.erase(remove(str.begin(), str.end(), charsToRemove), str.end());
     return removeCharsFromString(str, 'x', (strlen - 1));
   }
  }
}

int main() {
  string str = "jxoxxrexggxelxxt xxxxkixspxajxtasxoxk";
  int size = sizeof(str);
  removeCharsFromString(str, 'x', size);
  cout << str;
  return 0;
}

// Given a string, compute recursively a new string where all the 'x' chars have been removed.
