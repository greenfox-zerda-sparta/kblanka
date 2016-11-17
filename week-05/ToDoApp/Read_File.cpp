/*
 * Read_File.cpp
 *
 *  Created on: 2016. nov. 17.
 *      Author: Tecra_Z50
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Read_File.h"

using namespace std;

Read_File::Read_File() {

}

string Read_File::read_content() {
  string result;
  string file_content;
  ifstream my_file;
  int line_num = 1;
  my_file.open("list.txt");
  if(my_file.is_open()) {
    while(getline(my_file, file_content)){
      stringstream temp;
      temp << line_num;
      string str;
      temp >> str;
      result += str + " - " + file_content + "\n";
      ++line_num;
    }
  }else{
    cout << "File is unavailable." << endl;
  }
  my_file.close();
  return result;
}

int Read_File::is_empty() {
  ifstream read("list.txt");
  if(!read) return 0;
  bool isEmpty = read.peek() == EOF;
  if (isEmpty == true)
    cout << "No todo for today!";
  return 0;
}


Read_File::~Read_File() {

}
