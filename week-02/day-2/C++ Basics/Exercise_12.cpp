#include <iostream>
#include <string>

using namespace std;

void mysum (int a[], int len) {
	cout << "The length of this array is >> " << len << " <<." << endl;
	int s = 0;
	for (int i = 0; i < len; i++) {
		s = s + a[i];
	}
	cout << "The sum of this array is >> " << s << " <<." << endl;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  int len2 = sizeof (numbers) / sizeof (int);
  mysum (numbers, len2);

  // write your own sum function
  // it should take an array and it's length

  return 0;
}
