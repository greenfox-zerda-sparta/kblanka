#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  int count, number;
  float sum = 0;


  cout << "Enter a counter: ";
  cin >> count;

  int* array = new int[count];
  cout << "Enter your numbers: " << endl;
  for (int i = 0; i < count; i++) {
    cin >> number;
    sum = sum + number;
  }
  cout << "Total: " << sum << endl;
  cout << "Average of total: " << sum / count << endl;

  delete[] array;
  return 0;
}
