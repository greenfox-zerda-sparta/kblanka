#include <iostream>
#include <string>

using namespace std;

template <class T>
T sort_descending(T *array, T length) {
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
  return 0;
}

int main() {
  int my_array[] = {34, 352, 53, 12, 1, 234, 51};
  int length = sizeof(my_array) / sizeof(my_array[0]);
  sort_descending(my_array, length);
  for (int i = 0; i < length; i++)
    cout << my_array[i] << " ";

	// create a function template that takes an array and sort it in a descending order

  return 0;
}
