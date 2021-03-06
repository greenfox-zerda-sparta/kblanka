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
#include <cstdio>
#include <stdio.h>

#include "Read_File.h"
#include "Usage.h"
#include "AddTask.h"
#include "RemoveTask.h"

using namespace std;

int main(int argc, char* argv[]) {
  string input;
  getline (cin,input);

  if (argv[0] == 1) {
    Usage start;
    start.print_usage();
  }
  if(argv[1] ==  "-l" ) {
      Read_File read;
      cout << read.read_content();
      read.is_empty();
    }
  if(input ==  "-a") {
    AddTask task;
    task.write_content();
  }

  if(input == "-r" ) {
    RemoveTask remove;
    remove.countLine("list.txt");
    remove.removeLine("list.txt", 3);
  }

  if(input == "-c") {
    AddTask check;
    check.check_in("list.txt", 5);
  }

  return 0;
}


