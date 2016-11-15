#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ofstream new_file;
  new_file.open("third-exercise.txt");

  if(new_file.is_open()) {
    for (int i = 0; i <= 20; i++)
      new_file << i << endl;
  }
  else {
    cout << "The file is closed" << endl;
  }

  // Open a file called "third-exercise.txt"
  // Write numbers from 0 to 20 into the file each in a new line

  return 0;
}
