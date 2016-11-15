#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ofstream new_file;
  new_file.open("fifth-exercise.txt");
  string file_content = "Lets try writing sth here\n";
  new_file << file_content;


  if(new_file.is_open()) {
    cout << file_content;
  }
  else {
    cout << "Could not open the file" << endl;
    return 2;
  }

  new_file.close();

  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error

  return 0;
}
