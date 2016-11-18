/*
 * AddTask.h
 *
 *  Created on: 2016. nov. 17.
 *      Author: Tecra_Z50
 */

#ifndef ADDTASK_H_
#define ADDTASK_H_
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class AddTask {
public:
  AddTask();
  void write_content();
  void check_in(char* sourcefile, int line);
  int countLine(char* sourcefile);
  void replace_char(char& str, int n, char c);
  ~AddTask();
};


#endif /* ADDTASK_H_ */
