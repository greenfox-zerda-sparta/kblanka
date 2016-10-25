#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {
	if (n == 1)
		return 1;
	else
		return n * factorial (n-1);
}

int main() {
	int x = 3;
	cout << "The input is " << x << ", the factorial is " << factorial (x) << "." << endl;

  // create a function that returns it's input factorial

  return 0;
}
