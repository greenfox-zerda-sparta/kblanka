#include <iostream>
#include <string>

using namespace std;

int charnum(string word, char character) {
  int sum = 0;
  int length = sizeof(word) / sizeof(word[0]);
  for (int i = 0; i < length; i++) {
    if (word[i] == character)
      sum = sum + 1;
  }
  return sum;
}

int main() {
  string word = "makkoshotyka-also";
  char letter = 'o';
  cout << charnum(word, letter);
  // Write a function that takes a string and a character, and counts how many
  // times the character occures in the string and it should return a number

  return 0;
}
