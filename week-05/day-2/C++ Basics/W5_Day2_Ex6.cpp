#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_content(string filename) {
  string result;
  string file_content;

  ifstream new_file;
  new_file.open(filename.c_str());
  // new_file.open(filename); why this is not working???

  if(new_file.is_open()) {
    while(new_file >> file_content){
      result += file_content + " ";
    }
  }else{
    cout << "File is closed" << endl;
  }
  new_file.close();
  return result;
}

int main() {

  ofstream new_file;
  new_file.open("sixth-exercise.txt");
  string file_content = "Lets try writing sth here again\n";
  new_file << file_content;
  new_file.close();

  cout << read_content("sixth-exercise.txt");

  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter

  return 0;
}
