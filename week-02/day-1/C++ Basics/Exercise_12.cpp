#include <iostream>
#include <string>

using namespace std;

int main() {
	string m = "Apple";
	for(int a = 1; a <= 2; ++a){
		m+= m;
	}
	cout << m;

//fill the m variable with its content 4 times

	return 0;
}
