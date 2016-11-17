/*
 * RemoveTask.h
 *
 *  Created on: 2016. nov. 17.
 *      Author: Tecra_Z50
 */

#ifndef REMOVETASK_H_
#define REMOVETASK_H_
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>
#include <stdio.h>

using namespace std;

class RemoveTask {
public:
  RemoveTask();
  int countLine(char* sourcefile);
  void removeLine(char* sourcefile, int line);
  virtual ~RemoveTask();
};

#endif /* REMOVETASK_H_ */
