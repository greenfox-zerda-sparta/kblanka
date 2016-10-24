#include <iostream>
#include <string>

using namespace std;

int main() {
	int h1 = 350;
	int h2 = 200;

	if (h2*2 > h1)
		cout << "The double of "<< h2 << " is greater than " << h1 << "." << endl;
	else
		cout << "The double of "<< h2 << " is NOT greater than " << h1 << "." << endl;

	// tell if the double of h2 is bigger than h1
	return 0;
}
