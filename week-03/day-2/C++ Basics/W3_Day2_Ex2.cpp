#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

int get_surface(RectangularCuboid cube) {
  int sum =  2 * (cube.a * cube.b) + 2 * (cube.c * cube.b) + 2 * (cube.a * cube.c);
  return sum;
}

int get_volume(RectangularCuboid cube) {
  int sum = cube.a * cube.b * cube.c;
  return sum;
}

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

int main() {
  RectangularCuboid mycube;
  mycube.a = 2;
  mycube.b = 3;
  mycube.c = 4;

  cout << "This is the surface of my cube: " << get_surface(mycube) << endl;
  cout <<"This is the volume of my cube: " <<  get_volume(mycube);

  return 0;
}
