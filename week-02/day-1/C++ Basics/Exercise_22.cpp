#include <iostream>
#include <string>

using namespace std;

int main() {
	int ac = 8;
	int time = 120;
	string out = "";

	if (ac%4==0 && time <= 200)
	    cout << "Check" << endl;
	else if (time > 200)
	    cout << "Time out" << endl;
	else
		cout << "Run Forest Run!" << endl;

	// if ac is dividable by 4
	// and time is not more than 200
	// set out to 'check'
	// if time is more than 200
	// set out to 'Time out'
	// otherwise set out to 'Run Forest Run!'

	return 0;
}
