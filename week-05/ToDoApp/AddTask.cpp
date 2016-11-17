/*
 * AddTask.cpp

 *
 *  Created on: 2016. nov. 17.
 *      Author: Tecra_Z50
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "AddTask.h"

using namespace std;

AddTask::AddTask() {

}

void AddTask::write_content() {
  string new_task;
  cout << "Add a new task: " << endl;
  getline(cin, new_task);
  ofstream my_file;
  my_file.open("list.txt", fstream::app);
  if(my_file.is_open() && new_task != "") {
    my_file << new_task + "\n" ;
    my_file.close();
  }
  else {
    cout << "No task is provided.";
  }
}

AddTask::~AddTask() {

}
