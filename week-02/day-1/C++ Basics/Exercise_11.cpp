#include <iostream>
#include <string>

using namespace std;

int main() {
	int k = 1521;

	if (k % 3 == 0 || k % 5 == 5)
		cout << k << " is dividable by 3 or 5.";
	else
		cout << k << " is NOT dividable by 3 or 5.";

	// tell if k is dividable by 3 or 5

	return 0;
}
