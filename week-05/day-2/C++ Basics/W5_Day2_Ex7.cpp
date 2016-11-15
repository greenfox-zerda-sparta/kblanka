#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_content(string filename, string file_content) {
  ofstream new_file;
  new_file.open(filename.c_str());
  if(new_file.is_open()) {
    new_file << file_content;
    new_file.close();
  }
}


int main() {

  ofstream new_file;
  new_file.open("seventh-exercise.txt");
  //string file_content = "Egres\n";
  //new_file << file_content; why only one input is working, not both of them?

  write_content("seventh-exercise.txt", "Ribizli");

  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter

  return 0;
}
