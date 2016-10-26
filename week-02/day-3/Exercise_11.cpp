#include <iostream>
using namespace std;

void sortAscending(int *array, int length) {
    int temp;
    for(int i2=0; i2<=length; i2++) {
		for(int j2=0; j2<length; j2++) {
			if(array[j2]>array[j2+1]) {
				temp=array[j2];
				array[j2]=array[j2+1];
				array[j2+1]=temp;
			}
		}
    }
}
// Implement this function to sort the array in an ascending order.

void sortDescending(int *array, int length) {
    int temp;
    for(int i3=0; i3<=length; i3++) {
		for(int j3=0; j3<(length-1); j3++) {
			if(array[j3]<array[j3+1]) {
				temp=array[j3];
				array[j3]=array[j3+1];
				array[j3+1]=temp;
			}
		}
    }
}
// Implement this function to sort the array in a descending order.

void printArray(int *array, int length) {
	cout << "{";
	for(int i=0; i<length; i++){
		cout << array[i];
		if(i<length-1) {
			cout << ", ";
		}
	}
	cout << "}" << endl;
}

int main(int argc, char** argv){
	int example[13] = {34, 56, 26, 84, 29, 3875, 43, 96, 4759, 979, 92, 56, 1987};
	sortAscending(example, 13);
	printArray(example, 13);
	sortDescending(example, 13);
	printArray(example, 13);

	return 0;
}
