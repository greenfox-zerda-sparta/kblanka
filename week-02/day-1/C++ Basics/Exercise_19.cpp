#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "cheese";
	cout << "String Length = " << x.size() << endl;

	if ( x.size() % 2 == 0)
		//return true;
		cout << "True";
	else
		//return false;
		cout << "False";

	// Tell if the x has even or odd number of
	// characters with a True for even and
	// false False output otherwise

	return 0;
}

