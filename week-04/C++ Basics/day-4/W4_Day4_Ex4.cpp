#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a ponter.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*
//

class ParentClass {
public:
  string nonvirtualstring();
  virtual string virtualstring();
};

string ParentClass::nonvirtualstring(){
  return string(" || Hey, this is ParentClass non virtual string || ");
}

string ParentClass::virtualstring() {
  return string(" || Hey, this is ParentClass virtual string || ");
}

class ChildClass : public ParentClass {
public:
  string nonvirtualstring();
  virtual string virtualstring();
};

string ChildClass::nonvirtualstring() {
  return string(" || Hey, this is ChildClass non virtual string || ");
}

string ChildClass::virtualstring() {
  return string(" || Hey, this is ChildClass virtual string || ");
}

int main() {
  ParentClass* a = new ChildClass();
  cout << "First with ParentClass: " << a->nonvirtualstring() << " and " << a->virtualstring() << endl;
  cout << "And then with ChildClass: " << ((ChildClass*)a)->nonvirtualstring() << " and " << ((ChildClass*)a)->virtualstring() << endl;
  return 0;
}
