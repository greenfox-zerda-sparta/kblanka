//============================================================================
// Name        : main.cpp
// Author      : kblanka
// Version     : 2nd version
// Description : TODOAPP
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <stdio.h>
#include "TaskHandler.h"
#include "Usage.h"

using namespace std;

int main() {
  string input;
  Usage start;
  start.print_usage();
  do {
    getline (cin, input);
  if(input ==  "-l") {
    TaskHandler read;
    cout << read.read_content();
    read.is_empty();
  }
  if(input ==  "-a") {
    TaskHandler task;
    task.write_content();
  }
  if(input == "-r" ) {
    int num;
    cin >> num;
    if (num) {
      TaskHandler remove;
      remove.countLine("list.txt");
      remove.removeLine("list.txt", num);
    }
    else {
      cout << "\nError: Your input is invalid. Please restart the program.\n";
      break;
    }
  }
  if(input == "-c") {
    int num, _num;
    cin >> num;
    if (num % 1 == 0) { //is this okay?
      TaskHandler check;
      check.check_in("list.txt", num);
    }
    else {
      cout << "\nError: Your input is invalid. Please restart the program.\n";
      break;
    }
  }
  /*if (input != "-l" && input != "-a" && input != "-r" && input != "-c") {
    cout << "\nError: Unsupported argument.\n";
  }*/
  } while (input != "exit");

  return 0;
}


