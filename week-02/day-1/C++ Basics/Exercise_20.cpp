#include <iostream>
#include <string>

using namespace std;

int main() {
	int z = 15;
	if (10<z && z<20)
		cout <<"Sweet!";
	else if (z<10)
		cout << "More";
	else
		cout << "Less";

	// if z is between 10 and 20 print 'Sweet!'
	// if less than 10 print 'More!',
	// if more than 20 print 'Less!'

	return 0;
}
