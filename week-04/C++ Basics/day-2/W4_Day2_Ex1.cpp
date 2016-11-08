#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  Student GiveDetails;
  GiveDetails.name = "John";
  GiveDetails.age = 21;

  cout << "The student's name is " << GiveDetails.name << " and his/her age is " << GiveDetails.age << "." << endl;

  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21

  return 0;
}
