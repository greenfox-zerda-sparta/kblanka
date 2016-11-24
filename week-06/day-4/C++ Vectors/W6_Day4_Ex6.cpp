#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void last_element(vector<double>& newVector) {
  while (newVector.size() != 10) {
    int x = newVector.size();
    srand (time(NULL));
    int a = rand() % x;
    newVector[a] = newVector[a] + newVector[x];
    newVector.erase(newVector.begin() + (newVector.size() - 1));
  }
}

void print_all(vector<double>& newVector) {
  cout << "The elements of the vector: ";
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<double> myDoubleVector(30, 1.5);
  print_all(myDoubleVector);
  last_element(myDoubleVector);
  print_all(myDoubleVector);

	//create a vector of doubles with the size of 30, with every element equal of 1.5
	//create functions that takes this vector, pick the last element of it and adding its value to
	//an other item from the vector(this item place is random) and remove the last element at the end
	//run this function 20 times, then print every element of the vector

  return 0;
}
