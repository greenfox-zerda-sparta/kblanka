/*
 * Class.cpp
 *
 *  Created on: 2016. nov. 8.
 *      Author: Tecra_Z50
 */

#include "Class.h"

#include <iostream>
#include <string>

using namespace std;

Class::Class() {
  gradenum = 0;
};

void Class::add_grade(int num) {
  all_of_the_grades[gradenum] = num;
  gradenum++;
}

float Class::get_average() {
  float sum = 0;
  for (int i = 0; i < gradenum; i++) {
    sum = all_of_the_grades[i] + sum;
  }
  return sum / gradenum;
}
