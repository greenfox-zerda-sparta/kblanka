#include <iostream>
#include <string>

using namespace std;

int main() {
	int d[] = {1, 2, 3, 8, 5, 6};
	int length = sizeof(d) / sizeof(int);
	for(int i = 0; i < length; i++){
		if (d[i] == 8)
			d[i] = 4;
	}

    for(int i = 0; i < 6; i++){
    	cout << "Array[" << i << "] => " << d[i] << endl;
	}

	// change 8 to 4, than print all the elements of the array

  return 0;
	}
