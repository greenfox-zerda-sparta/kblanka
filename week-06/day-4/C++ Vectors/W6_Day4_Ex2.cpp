#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fill_vector(vector<int>& newVector) {
  cout << "Enter five numbers: " << endl;
  int input;
  while(newVector.size() < 5) {
    cin >> input;
    newVector.push_back(input);
  }
  cout << endl;
}

void print_all(vector<int>& newVector) {
  cout << "The elements of the vector: ";
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> myVector;
  fill_vector(myVector);
  print_all(myVector);

	//create an integer vector with the size of 5 and print all elements of it

  return 0;
}
