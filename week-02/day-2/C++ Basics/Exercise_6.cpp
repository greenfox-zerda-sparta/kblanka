#include <iostream>
#include <string>

using namespace std;

int main() {
	int f[] = {3, 4, 5, 6, 7};
	for(int i = 0; i < 6; i++){
        f[i] = f[i]*2;
	}
		for(int i = 0; i < 5; i++)
		 {
		   cout << "Array[" << i << "] => " << f[i] << endl;
		 }

	cout << "Array elements are doubled, yeey!" << endl;

	// Please double all the elements, than print all of them

  return 0;
}
