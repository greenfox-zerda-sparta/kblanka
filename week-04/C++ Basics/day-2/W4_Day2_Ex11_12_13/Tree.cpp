/*
 * Tree.cpp
 *
 *  Created on: 2016. nov. 8.
 *      Author: Tecra_Z50
 */

#include "Tree.h"
#include <iostream>

using namespace std;

Tree::Tree() {

}

int Tree::wholetree(int row) {
  for(int i = 0; i <= row; i++){
    for(int j = (row - 1); j >= i; j--)
      cout << " ";
    for(int k = 1; k <= i * 2 - 1; k++)
      cout <<"*";
    cout << endl;
    }
  return 0;
}
