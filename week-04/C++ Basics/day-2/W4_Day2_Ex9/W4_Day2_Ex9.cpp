#include <iostream>
#include <string>
#include "Class.h"

using namespace std;

int main() {
  Class myClass = Class();

  myClass.add_grade(3);
  myClass.add_grade(4);
  myClass.add_grade(3);

  cout << myClass.get_average() << endl;

    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

  return 0;
}
