#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL)); // This initializes the random generator.
	int rnd = 0;
	for (int i=0; i<20; i++) {
		rnd = rand() % 5; // generate a random number in the range [0, 4]
		try {
			switch (rnd) {
				case 0:
					throw 3.2f;
					break;
				case 1:
					throw double(43.56);
					break;
				case 3:
					throw "Abrakadabra";
					break;
				case 4:
					throw false;
					break;
				default:
					throw 12;
					break;
			}
		}
			catch(int a) {
			cout << "Exception type: integer, exception value: " << a << endl;
			}
      catch(double b) {
      cout << "Exception type: double, exception value: " << b << endl;
      }
      catch(float c) {
      cout << "Exception type: float, exception value: " << c << endl;
      }
      catch(const char *d) {
      cout << "Exception type: string, exception value: " << d << endl;
      }
      catch(bool e) {
      cout << "Exception type: boolean, exception value: " << e << endl;
      }
		}
// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.
	return 0;
}
