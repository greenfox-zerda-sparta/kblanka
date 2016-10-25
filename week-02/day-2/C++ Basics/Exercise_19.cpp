#include <iostream>
#include <math.h>
using namespace std;

bool primenum(int a){
	bool b = true;
	for (int i = 2; i <= sqrt(a); i++)
		if (a % i == 0)
			b = false;
	return b;
}
int main(){
  int number = 121;

  if (primenum (number))
	  cout << number << " is a prime number." << endl;
  else
	  cout << number << " is NOT a prime number." << endl;

  cout << "Please input a number:" << endl;
  cin >> number;

  if (primenum (number))
	  cout << number << " is a prime number.";
  else
	  cout << number << " is NOT a prime number.";

  // create a function that decides if a number is a prime number.
  // It should take a number as an argument and return true if it is prime and
  // false otherwise.

	return 0;
}
