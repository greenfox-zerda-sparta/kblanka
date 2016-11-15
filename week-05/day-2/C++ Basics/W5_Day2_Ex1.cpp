#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream new_file;
  new_file.open("first-exercise.txt");
  new_file << "Blanka Kovacs\n";
  new_file.close();

  // Open a file called "first-exercise.txt"
  // Write your name in it as a single line

  return 0;
}
