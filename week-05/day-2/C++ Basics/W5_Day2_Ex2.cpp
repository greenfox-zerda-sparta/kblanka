#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ifstream new_file;
  new_file.open("second-exercise.txt");
  string file_content;
  new_file >> file_content;
  cout << file_content;
  new_file.close();

  // Open a file called "second-exercise.txt"
  // Read the content of the file and print it to the terminal window

  return 0;
}
