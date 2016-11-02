#include <iostream>
#include <string>

using namespace std;

string CreatePalindrome(string input) {
  string palindrome = input;
  for (int i = input.size()-1; i >= 0; i--)
    palindrome = palindrome + input[i];
  return palindrome;
}

string CreatePalindrome2(string input) {
  string input2;
  for (int i = input.size()-1; i >= 0; i--)
    input2 = input2 + input[i];
  return input + input2;
}

int main() {
  string output = CreatePalindrome("pear");
  cout << output << endl; // it prints: pearraep

  string output2 = CreatePalindrome("apple");
  cout << output2 << endl;

  return 0;
}
