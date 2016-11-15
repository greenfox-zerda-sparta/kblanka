#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ifstream new_file;
  new_file.open("fourth-exercise.txt");
  string file_content;

  while(new_file >> file_content) {
    cout << file_content << endl;
  }

  new_file.close();

  // Open a file called "fourth-exercise.txt"
  // Print all of its lines to the terminal window

  return 0;
}
