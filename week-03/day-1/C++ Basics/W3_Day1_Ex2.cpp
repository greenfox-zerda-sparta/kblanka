#include <iostream>
using namespace std;

int main() {
  int* pointer = new int[10];
  for (int i = 0; i < 10; i ++)
    if (i >= 5)
       pointer[i] = i - 5;
    else
      pointer[i] = i;
  for (int i = 0; i < 10; i++)
    cout << pointer[i] << endl;

  delete [] pointer;

  // Please allocate a 10 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  return 0;
}
