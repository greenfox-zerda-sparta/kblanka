#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector< vector<int> > myVector(5, vector<int>(5,0));
  myVector.push_back(vector<int>(5, 1));
  for (unsigned int i = 0; i < myVector.size(); i++) {
    for(unsigned int j = 0; j < myVector[i].size(); j++)
    cout << myVector[i][j] << " ";
  }
  cout << endl;

  //vector< vector<int> > vec(4, vector<int>(4))
	//create a vector of vector of integers, yeah a vector that holds vectors of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector at the begining
	//create a function that will add a new vector of integers to the end of our outer vector

 return 0;
}
