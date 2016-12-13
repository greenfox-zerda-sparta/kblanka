#include <iostream>
#include <string>
#include <map>

using namespace std;

void letter_counter(string word) {
  map <char, int> counter; // needs #include <map>
  for (unsigned int i = 0; i < word.size(); i++ ) {// chars in the string
       counter[ word[i] ] ++;
  }
  for(map <char, int>::iterator it = counter.begin(); it != counter.end(); ++it) {
      std::cout << it->first << " " << it->second << " " << endl;
  }
}

int main() {
  letter_counter("lalalalalalalililililalalaaaam");
  return 0;
}

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string
