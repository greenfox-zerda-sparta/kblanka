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
  cout << "-l   Lists all the the tasks" << endl << "-a   Adds a new task" << endl;
  cout << "-r   Removes a task" << endl << "-c   Completes an task" << endl << endl;
}

Usage::~Usage() {
}
