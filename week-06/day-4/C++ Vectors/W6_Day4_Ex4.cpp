#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fill_vector(vector<char>& newVector) {
  cout << "Enter your character (for exit press 'x'): " << endl;
  char input;
  while(input != 'x') {
    cin >> input;
    newVector.push_back(input);
  }
}

void print_all(vector<char>& newVector) {
  cout << "The elements of the vector: ";
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<char> myVector;
  fill_vector(myVector);
  print_all(myVector);

	//create a vector of chars with the size of zero;
	//write a function where the user can add characters to the end of this vector

  return 0;
}
