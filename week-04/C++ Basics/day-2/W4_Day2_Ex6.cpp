#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Circle {
  private:
    int radius;
    float p;
    //why cannot const float p = 3.14 ??
  public:
    Circle(int radius) {
      this->radius = radius;
      this->p = 3.14;
    }
    float get_circumference(){
      return 2 * radius * p;
    }
    float get_area(){
      return pow (radius, 2) * p;
    }
};


int main() {
  Circle myCircle(3);
  cout << "Circumference: " << myCircle.get_circumference() << endl;
  cout << "Area: " << myCircle.get_area() << endl;

    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

  return 0;
}
