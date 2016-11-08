#include <iostream>
#include <string>

using namespace std;

class Car {
  private:
    string type;
    float km;
  public:
    Car(string type, float km){
      this->type = type;
      this->km = km;
    }
    float give_km(float km){
      this->km = km;
      return km;
    }
    float run(float pluskm){
      float result = pluskm + km;
      return result;
    }
};

int main() {
  Car myCar("Mazda", 10);
//should I give it properties?

  cout << "Original KM: " << myCar.give_km(20) << endl;
  cout << "After RUN: " << myCar.run(10) << endl;

    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

  return 0;
}
