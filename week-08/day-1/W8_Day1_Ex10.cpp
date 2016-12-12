#include <iostream>
using namespace std;

#define str(a) #a
#define PRINT_ARGUMENT_VALUE(a) {cout << "Variable " << str(a) << " = " << a << endl;}

int main() {
int a = 10;
PRINT_ARGUMENT_VALUE(a);
	return 0;
}


// Create a function like macro that takes an argumnet.
// It should print the the code of the argument and the value of the argument too.
// E.g.:
//
// #define FunctionLikeMacro(a) //here comes magic
// int Main() {
//  int a = 23;
//  FunctionLikeMacro(a);
//
// }
//
// Should have the output:
// Variable a = 23;
// Where both 'a' and '23' are set by teh macro.

