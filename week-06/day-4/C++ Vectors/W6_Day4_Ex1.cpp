#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fill_vector(vector<int>& newVector) {
  cout << "Enter five numbers: " << endl;
  int input;
  while(newVector.size() != 5) {
    cin >> input;
    newVector.push_back(input);
  }
  cout << endl;
}

void print_third_elem(vector<int>& newVector) {
  cout << "Third element of the vector is: ";
  cout << newVector[2] << endl;
  cout << endl;
}

int main() {
  vector<int> myVector;
  fill_vector(myVector);
  print_third_elem(myVector);

	//create an integer vector with the size of 5 and print the 3rd element of it

  return 0;
}


