/*
 * TaskHandler.h
 *
 *  Created on: 2016. nov. 18.
 *      Author: Tecra_Z50
 */

#ifndef TASKHANDLER_H_
#define TASKHANDLER_H_
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio> //one of this needed for the rename
#include <stdio.h> //one of this needed for the rename

using namespace std;

class TaskHandler {
public:
  TaskHandler();
  void check_in(char* sourcefile, int line);
  int countLine(char* sourcefile);
  int is_empty();
  string read_content();
  void removeLine(char* sourcefile, int line);
  void write_content();
  virtual ~TaskHandler();
};

#endif /* TASKHANDLER_H_ */
