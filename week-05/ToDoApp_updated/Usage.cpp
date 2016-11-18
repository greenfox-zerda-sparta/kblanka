/*
 * Usage.cpp
 *
 *  Created on: 2016. nov. 17.
 *      Author: Tecra_Z50
 */

#include "Usage.h"
#include <iostream>

using namespace std;

Usage::Usage() {
}

void Usage::print_usage() {
  cout << endl << "CLI Todo application" << endl << "====================" << endl << endl;
  cout << "Command line arguments:" << endl;
  cout << "-l   Lists all the tasks" << endl << "-a   Add new task" << endl;
  cout << "-r   Remove task" << endl << "-c   Complete task" << endl;
  cout << "exit - Program exit" << endl << endl;
}

Usage::~Usage() {
}
