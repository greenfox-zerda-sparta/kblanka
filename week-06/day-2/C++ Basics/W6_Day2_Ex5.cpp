#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings. Or a vector of strings, or a struct that
// has a string array as a field and an int representing the size of the string array. Or a
// class to the same effect, or anything else that get's the job done. Up to You.
// I suggest vector<string>.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string a, char b) throw (const char*) {
  int length = a.size();
  string array[length];
  int num = 0;
  string* result = new string[length];
  for (int i = 0; i < length; i++) {
    if (a[i] == b) {
    //cout << array[num] << ' ';
    num++;
    i++;
    }
    array[num] += a[i];
  }
  if (num == 0) {
    throw "Character not found.";
  }
return result;
}

int main() {
  try {
   string my_string = "Larifarilalalilalilam";
   string* q = split(my_string, 'a');
   int length =  my_string.size();
   for (int i = 0; i < length; i++)
     cout << my_string[i];
  }
  catch (const char* excp) {
    cout << "Exception: " << excp << endl;
  }
  return 0;
}
