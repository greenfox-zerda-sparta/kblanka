//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : TODOAPP
//============================================================================

#include <iostream>
#include <fstream>
#include <string>

#include "Read_File.h"
#include "Usage.h"

using namespace std;

int main(int argc, char* argv[]) {
  Usage start;
  start.print_usage();


  string input;
  cin >> input;

  if (input == "-l") {
    Read_File read;
    cout << read.read_content();
    read.is_empty();
  }

  return 0;
}


