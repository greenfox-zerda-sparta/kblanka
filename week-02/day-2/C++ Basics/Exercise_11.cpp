#include <iostream>
#include <string>

using namespace std;

void addato (string word) {
	string newword = word + 'a';
	cout << "The new word is >> " << newword << " <<." << endl;
}

int main() {
  string k = "kuty";
  addato (k);

  // write a function that gets a string as an input
  // and appends an 'a' character to its end

  return 0;
}
