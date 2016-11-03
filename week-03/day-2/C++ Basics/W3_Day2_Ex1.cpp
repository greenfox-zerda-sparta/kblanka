#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  float cpu_speed_hz;
  float ram_size;
};

void display(Computer computer);
void show(Computer *computer);

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};
  computer.name = "Macbook Pro";
  display(computer);
  show(&computer);

  // Change the name of the computer to "Macbook Pro" and print all the stats

  return 0;
}

void display(Computer computer) {
  cout << computer.name << endl;
  cout << computer.cpu_speed_hz << endl;
  cout << computer.ram_size << endl;
  cout << endl;
}

void show(Computer *computer) {
  cout << computer->name << endl;
  cout << computer->cpu_speed_hz << endl;
  cout << computer->ram_size << endl;
  cout << endl;
}

