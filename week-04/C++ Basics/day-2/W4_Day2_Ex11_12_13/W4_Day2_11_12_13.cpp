#include <iostream>
#include "Triangle.h"
#include "Tree.h"
#include "Diamond.h"
using namespace std;

int main() {
  Triangle myTriangle = Triangle();
  myTriangle.halftree(5);

  cout << endl;

  Tree myTree = Tree();
  myTree.wholetree(5);

  cout << endl;

  Diamond myDiamond = Diamond();
  myDiamond.diamond(5);
}
