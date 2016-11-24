#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void fill_vector(vector<char>& newVector) {
  cout << "Enter the characters of 'greenfox': " << endl;
  char input;
  while(newVector.size() < 8) {
    cin >> input;
    newVector.push_back(input);
  }
  if (find(newVector.begin(), newVector.end(), ('g', 'r', 'e', 'e', 'n', 'f', 'o', 'x')) != newVector.end()) {
    cout << "Perfect! The elements of your vector: ";
    for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
    }
  }else
  cout << "Hey, you spelled incorrectly!" << endl;
}

int main() {
  vector<char> myVector;
  fill_vector(myVector);

	//create a vector of characters with the size of 8
	//ask the user to fill this vector with characters one by one
	//at the end make sure the vector holds the letters of "GREENFOX"
	//so correct the user if he/she gives a different letter from the one we want them to give :)

  return 0;
}
