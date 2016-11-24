#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

void fill_vector_random(vector<int>& newVector) {
srand (time(NULL));
  for (int i =0; i < 20; i++){
    int b = rand() % 10;
    newVector.push_back(b);
  }
}

void print_all(vector<int>& newVector) {
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
  }
  cout << endl;
}

void del_even_num(vector<int>& newVector) {
  for (unsigned int i = 0; i < newVector.size(); i++) {
    if (newVector[i] % 2 == 0)
      newVector.erase(newVector.begin() + i);
  }
}

int main() {
  vector<int> myVector;
  fill_vector_random(myVector);
  cout << "The original vector: ";
  print_all(myVector);
  del_even_num(myVector);
  cout << "The new vector without even numbers: ";
  print_all(myVector);

	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
	//remove the even numbers, then print the items again

  return 0;
}
