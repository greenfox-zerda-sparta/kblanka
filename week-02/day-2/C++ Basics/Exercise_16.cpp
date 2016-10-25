#include <iostream>
using namespace std;

int main(){
	int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int len1 = sizeof(m[1]) / sizeof(int);
	int len2 = (sizeof(m)/len1) / sizeof(int);
	cout << "This is the number of columns: " << len1 << endl << "and this is the number of rows: " << len2 << endl;
	cout << "a exercise:" << endl;
	for (int i = 0; i < len2; i++){
		for (int j = 0; j < len1; j++)
			cout << m[i][j];
		cout << endl;
	}
	cout << "b exercise:" << endl;
	for (int i = 0; i < len2; i++){
		for (int j = 0; j < len1; j++)
			cout << m[j][i];
		cout << endl;
	}
	cout << "c exercise:" << endl;
	for (int i = 0; i < len2; i++){
		for (int j = 0; j < len1; j++){
			cout << m[i][j];
			cout << "|";
		}
	}
	cout << endl;
	cout << "d exercise:" << endl;
	for (int i = 0; i < len2; i++){
		for (int j = 0; j < len1; j++){
			cout << m[i][j] << endl;
		}
	}

	//This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
	//a.) a row
	//b.) a column
	//c.) all in one line separated by the character '|'
	//d.) all in one column

	return 0;
}
