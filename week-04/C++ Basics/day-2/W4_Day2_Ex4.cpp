#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string new_name(string newname){
      this->name = newname;
      return name;
    }

    /*Student(string y) {
      setName(y);
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }*/

    string greet() {
      return "Hello my name is: " + this->name;
    }

};

int main() {
  Student NewStudent("John", 21);
  cout << NewStudent.greet() << endl;

  cout << NewStudent.new_name("Elsa") << endl;;
  cout << NewStudent.greet() << endl;

  // Create a method on student that takes a string as an argument and
  // changes it's name property

  return 0;
}
