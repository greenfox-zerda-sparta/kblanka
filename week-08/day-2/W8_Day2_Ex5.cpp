#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

void welcome_header(){
  cout << "   |*|    " << "**************************************" << endl;
  cout << "___\\U//___" << "**************************************" << endl;
  cout << "|\\ | | \\|" << " WELCOME TO THE SECRET SANTA GENERATOR*" << endl;
  cout << "|\\ | | \\|" << " **************************************" << endl;
  cout << "|\\ | | \\|" << " **************************************" << endl;
  cout << "|\\ | | \\|" << " **************************************" << endl;
  cout << "~~~~~~~~~" << " **************************************" << endl;
}


void fill_names_vector(vector<string>& newVector1, vector<string>& newVector2) {
  cout << "Enter the name of the participants (input quit, if you're ready!): " << endl;
  string input;
  while(cin >> input && input != "quit") {
    newVector1.push_back(input);
    newVector2.push_back(input);
  }
}

void print_vector(vector<string>& newVector) {
  for (vector<string>::iterator it = newVector.begin(); it != newVector.end(); it++) {
    cout << *it << endl;
  }
}

void two_random_shuffle(vector<string>& newVector1, vector<string>& newVector2) {
  random_shuffle(newVector1.begin(), newVector1.end());
  random_shuffle(newVector2.begin(), newVector2.end());
}

void pair_generator(vector<string>& newVector1, vector<string>& newVector2) {
  pair <string, string> secret_santa;
  for (unsigned int i = 0; i < newVector1.size(); i++) {
    for (unsigned int j = i; j < i + 1; j++) {
      if(newVector1[i] != newVector2[j]){
        secret_santa = make_pair(newVector1[i], newVector2[j]);
      }
      else{
        two_random_shuffle(newVector1, newVector2);
        secret_santa = make_pair(newVector1[i], newVector2[j]);
      }
      cout << secret_santa.first << " - " << secret_santa.second << '\n';
    }
  }
}

int main() {
  vector<string> NameList1;
  vector<string> NameList2;
  welcome_header();
  fill_names_vector(NameList1, NameList2);
  two_random_shuffle(NameList1, NameList2);
  pair_generator(NameList1, NameList2);

  return 0;
}

// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe
