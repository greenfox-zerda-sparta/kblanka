#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = 1357988018575474;
	int d = 11;
	if ( i % d == 0 )
		cout << d << " is a divisor of " << i <<".";
	else
		cout << d << " is NOT a divisor of " << i <<".";

	// tell if it has 11 as a divisor

	return 0;
}
