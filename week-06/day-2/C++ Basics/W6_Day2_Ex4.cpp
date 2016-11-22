#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string a, unsigned int b) throw (const char*) {
  string* result = new string[2];
  unsigned int length = a.size();
  string string1, string2;
  if (b <= length) {
    for (unsigned int i = 0; i < b; i++) {
      string1 += a[i];
    }
    for (unsigned int i = b; i < length; i++) {
      string2 += a[i];
    }
    result[0] = string1;
    result[1] = string2;
    return result;
    delete[] result;
  }
  else {
    throw "Index out of bound";
  }
}

int main() {
  try {
    string* a = split("springroll", 2);
    for (int i = 0; i < 2; i++)
      cout << a[i] << endl;
    string* b = split("beijingduck", 23);
    for (int i = 0; i < 2; i++)
      cout << b[i] << endl;
    string* c = split("cabbage", 2);
    for (int i = 0; i < 2; i++)
      cout << c[i] << endl;
  }
  catch (const char* excp) {
    cout << "Exception: " << excp << endl;
  }

	return 0;
}
