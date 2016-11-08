#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
    void greet() {
      cout << "Hello my name is: " << this->name;
    }

};

int main() {

  Student NewStudent("John", 21);

  NewStudent.greet();

  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"

  return 0;
}
