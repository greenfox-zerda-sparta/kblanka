#include <iostream>
#include <string>

using namespace std;

int main() {
	int e[] = {1, 2, 3, 4, 5};
	int length = sizeof(e) / sizeof(int);
	for(int i = 0; i < length; i++) {
        if(i == 3) {
        	e[i] = e[i]+1;
        }
    cout << "Array[" << i << "] => " << e[i] << endl;
	}

	// increment the 3rd element, than print all the elements of the array

  return 0;
}
