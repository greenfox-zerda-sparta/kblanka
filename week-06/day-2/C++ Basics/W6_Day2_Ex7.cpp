#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.

const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};

string merger (int a) throw (int, const char*) {
  string result;
  if (a > 5) {
    throw (a - 5);
  }
  else if (a < 0) {
    throw "Error: input cannot be negative number.";
  }
  else {
    int size = sizeof(sentence)/sizeof(char*);
    for (int i = 0; i < size; i++) {
      result += sentence[i];
        if (i != size - 1) {
            result += " ";
        }
    }
    return result;
  }
}

int main() {
  try {
  cout << merger(6);
  } catch (int a) {
    cout << "Error: input greater than 5, difference is: " << a << endl;
  }
  try {
  cout << merger(-1);
  } catch (const char* b) {
    cout << b << endl;
  }
  try {
  cout << merger(5);
  } catch (int a) {
    cout << a << endl;
  }

}
