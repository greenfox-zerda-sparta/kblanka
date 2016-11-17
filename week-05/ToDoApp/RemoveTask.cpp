/*
 * RemoveTask.cpp

 *
 *  Created on: 2016. nov. 17.
 *      Author: Tecra_Z50
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio> //one of this needed for the rename
#include <stdio.h> //one of this needed for the rename

#include "RemoveTask.h"

using namespace std;


RemoveTask::RemoveTask() {

}

int RemoveTask::countLine(char* sourcefile){
  ifstream infile;
  infile.open(sourcefile, ios::in);
  char data[100];
  int line = 0;
  while(infile.getline(data, 100)) line++;
  return line;
}

void RemoveTask::removeLine(char* sourcefile, int line){
  ifstream infile;
  char tempPath[1000]="list.txt";
  infile.open(sourcefile,ios::in);
  if(infile) {
    int numLine = countLine(sourcefile);
    if(numLine < line){
       cout<<"\nNo line to delete\n";
       return;
    }
  ofstream outfile;
  outfile.open("temp.txt", ios::out);
  char data[100];
  int i=0;
  while(infile.getline(data, 100)){
     i++;
     if(i == line) continue;
     outfile << data << "\n";
  }
  outfile.close();
  }
  infile.close();
  remove ("list.txt");
  rename ("temp.txt", "list.txt");
}

RemoveTask::~RemoveTask() {

}

