#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

void fill_vector_random(vector<int>& newVector) {
srand (time(NULL));
  for (int i =0; i < 10; i++){
    int b = rand() % 10;
    newVector.push_back(b);
  }
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
  myVector.reserve(10);
  fill_vector_random(myVector);
  print_all(myVector);

	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

  return 0;
}
