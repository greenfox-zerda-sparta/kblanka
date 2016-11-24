#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
void print_all(vector<T>& newVector) {
  cout << "The elements of the vector: ";
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> myIntVector(10, 3);
  vector<double> myDoubleVector;
  myDoubleVector.reserve(10);
  myDoubleVector.push_back(4);

  print_all(myIntVector);
  print_all(myDoubleVector);

  cout << "Size of my integer vector: " << myIntVector.size() << endl;
  cout << "Size of my double vector: " << myDoubleVector.size() << endl;

  if(myIntVector.size() > myDoubleVector.size()) {
    cout << "myIntVector size is higher";
  }
  else {
    cout << "myDoubleVector size is higher";
  }

	//create a vector of integers with the size of 10, fill them with random numbers
	//create a vector of doubles and reserve place for 10 items
	//push and item to the end of the vector with the double places
	//print which vectors size is higher (and why?)

  return 0;
}
