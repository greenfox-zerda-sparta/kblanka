#include <iostream>
#include <string>

using namespace std;


int main() {
	int ab = 123;
	int credits = 100;
	bool is_bonus = false;

	if (is_bonus == false) {
		if (credits >=50) {
		cout << ab - 2 << endl;
		} else
		cout << ab - 1 << endl;
	}
	else
		cout << ab << endl;;

	// if credits are at least 50,
	// and is_bonus is False decrement ab by 2
	// if credits are smaller than 50,
	// and is_bonus is False decrement ab by 1
	// if is_bonus is True ab should remain the same

	return 0;
}
