/*
 * Read_File.h
 *
 *  Created on: 2016. nov. 17.
 *      Author: Tecra_Z50
 */

#ifndef READ_FILE_H_
#define READ_FILE_H_
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Read_File {
public:
  Read_File();
  string read_content();
  ~Read_File();
};

#endif /* READ_FILE_H_ */
