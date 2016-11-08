/*
 * Triangle.cpp
 *
 *  Created on: 2016. nov. 8.
 *      Author: Tecra_Z50
 */

#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle() {

}

int Triangle::halftree(int row) {
  for(int i = 0; i <= row; i++){
    for(int j = 1; j <= i; j++){
      cout << "*";
    }
    cout << endl;
    }
    return 0;
}


