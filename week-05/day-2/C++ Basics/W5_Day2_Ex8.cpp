#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool copy_file(string filename1, string filename2){
  string line;
  ifstream first_file;
  first_file.open(filename1.c_str());
  ofstream second_file;
  second_file.open(filename2.c_str());
  if (first_file.is_open() && second_file.is_open()){
      while (getline(first_file, line)){
        second_file << line << "\n";
      }
      first_file.close();
      second_file.close();
      return true;
  }
  else{
    return false;
  }
}

int main() {

  ofstream new_file1;
  new_file1.open("alma.txt");
  string file_content1 = "This is an apple.";
  new_file1 << file_content1;
  new_file1.close();

  ofstream new_file2;
  new_file2.open("barack.txt");
  string file_content2 = "This is a peach.";
  new_file2 << file_content2;
  new_file2.close();

  copy_file("alma.txt", "barack.txt");

  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful

  return 0;
}
