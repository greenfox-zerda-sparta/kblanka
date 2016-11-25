#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

int a;

template <class T>
T divisor(T x) {
  int divisorsum = 0;
  for (int i = 1; i <= x; i++) {
    if (x % i == 0)
      divisorsum++;
  }
  return divisorsum;
}

template <class T>
void fill_vector_random(vector<T>& newVector) {
  srand (time(NULL));
  for (int i = 0; i < divisor(a); i++){
    int b = rand() % a;
    newVector.push_back(b);
  }
}

template <class T>
void print_all(vector<T>& newVector) {
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << " ";
  }
  cout << endl;
}

template <class T>
void ascending_order(vector<T>& newVector) {
  int temp;
  for(unsigned int i = 0; i < newVector.size(); i++) {
    for(unsigned int j = 0; j < newVector.size() - 1; j++) {
      if(newVector[j]>newVector[j+1]) {
        temp=newVector[j];
        newVector[j]=newVector[j+1];
        newVector[j+1]=temp;
      }
    }
    }
}

int main() {
  cout << "Enter a positive number: ";
  try {
    cin >> a;
    if (a <= 0){
      throw 0;
    }
    else {
      cout << "Your Number: " << a << endl;
      cout << "Number of divisors: " << divisor(a) << endl;

      int div = divisor(a);
      vector<double> myVector;
      myVector.reserve(div);

      fill_vector_random(myVector);
      cout << "Random numbers between 0 and " << a <<
              " in the number of its divisors: ";
      print_all(myVector);

      ascending_order(myVector);
      cout << "In ascending order: ";
      print_all(myVector);
    }
  }catch(int x){
    cout << "Error message: your number is not gretar than zero!" << endl;
  }

	//find how much integer divisor 2400 has
	//create a vector of doubles, reserve place for the divisors of 2400
	//fill this places with random numbers from 0 to 2400
	//sort them in ascending order

  return 0;
}
