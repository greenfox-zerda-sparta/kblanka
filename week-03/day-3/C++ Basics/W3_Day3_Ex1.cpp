#include <iostream>
using namespace std;

struct Stack {
  double* array;
  int length;
};

Stack* stack_construct(double input[], int size) {
  Stack* new_stack_ptr = new Stack;
  new_stack_ptr->array = new double[size];
  for (int i = 0; i < size; i++)
    new_stack_ptr->array[i] = input[i];
  new_stack_ptr->length = size;
  return new_stack_ptr;
}

void stack_push(Stack& stack, double value) {
  stack.length += 1;
  double* new_array_ptr = new double[stack.length];
  for (int i = 0; i < stack.length; i++) {
    if (i < stack.length - 1)
      new_array_ptr[i] = stack.array[i];
    else
      new_array_ptr[i] = value;
  }
  delete[] stack.array;
  stack.array = new_array_ptr;
}

double stack_pop(Stack& stack) {
  double result = stack.array[stack.length - 1];
  stack.length -= 1;
  double* new_array_ptr = new double[stack.length];
  for (int i = 0; i < stack.length; i++)
    new_array_ptr[i] = stack.array[i];
  delete[] stack.array;
  stack.array = new_array_ptr;
  return result;
}

bool is_empty2(Stack& stack) {
  return stack.length == 0;
}

void print_out(Stack& stack, int length) {
  for (int i = 0; i < length; i++)
    cout << stack.array[i] << " ";
}

int main() {
  double my_array[] = {1, 2, 3, 4, 5, 6};
  Stack* my_stack = stack_construct(my_array, 6);
  cout << "Original size of the stack: " << my_stack->length << endl;
  print_out(*my_stack, 6);

  stack_push(*my_stack, 6);
  cout << endl << "After push the size of the stack: " << my_stack->length << endl;
  print_out(*my_stack, 7);

  stack_pop(*my_stack);
  cout << endl << "After pop the size of the stack: " << my_stack->length << endl;
  print_out(*my_stack, 8);

  if(is_empty2(*my_stack))
    cout << endl << "It's empty." << endl;
  else
    cout << endl << "It's not empty." << endl;

	return 0;
}



