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
#include <string.h>
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
    my_file << "  " + new_task + "\n" ;
    my_file.close();
  }
  else {
    cout << "No task is provided.";
  }
}

void AddTask::check_in(char* sourcefile, int line){
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
  int i = 0;
  while(infile.getline(data, 100)){
     i++;
     if(i == line) {
       data[0] = 'X';
       cout << "proba";
     }
     outfile << data << "\n";
  }
  outfile.close();
  }
  infile.close();
 remove ("list.txt");
 rename ("temp.txt", "list.txt");
}

/*void AddTask::replace_char(char& str, int n, char c){
  str = strdup(str);
  str[n] = c;
}*/

int AddTask::countLine(char* sourcefile){
  ifstream infile;
  infile.open(sourcefile, ios::in);
  char data[100];
  int line = 0;
  while(infile.getline(data, 100)) line++;
  return line;
}


AddTask::~AddTask() {

}
