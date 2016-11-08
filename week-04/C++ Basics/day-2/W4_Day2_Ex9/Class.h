/*
 * Class.h
 *
 *  Created on: 2016. nov. 8.
 *      Author: Tecra_Z50
 */

#ifndef CLASS_H_
#define CLASS_H_

#include <iostream>
#include <string>

using namespace std;

class Class {
public:
  Class();
  void add_grade(int num);
  float get_average();
private:
  int gradenum;
  int all_of_the_grades[100];
};

#endif /* CLASS_H_ */


// Create a student Class
// that has a method `add_grade`, that takes a grade from 1 to 5
// an other method `get_average`, that returns the average of the
// grades
