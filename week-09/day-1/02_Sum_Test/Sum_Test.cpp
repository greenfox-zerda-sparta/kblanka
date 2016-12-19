
/*
 * Test.cpp
 *
 *  Created on: 2016. dec. 19.
 *      Author: Tecra_Z50
 */
#define CATCH_CONFIG_MAIN
#include "Sum_Test.h"
#include "catch.hpp"
#include <vector>

using namespace std;

int Sum_Test::get_vector_sum(vector<int>& newVector) {
  int result = 0;
  for (unsigned int i = 0; i < newVector.size(); i++) {
    result += newVector[i];
  }
  return result;
}

TEST_CASE("Test get_vector_sum(vector<int>& newVector)" "Empty") {
  Sum_Test my_test;
  vector<int> myVector;
  REQUIRE(my_test.get_vector_sum(myVector) == 0);
}

TEST_CASE("Test get_vector_sum(vector<int>& newVector)" "One element") {
  Sum_Test my_test;
  vector<int> myVector(1, 5);
  REQUIRE(my_test.get_vector_sum(myVector) == 5);
}

TEST_CASE("Test get_vector_sum(vector<int>& newVector)" "Same elements") {
  Sum_Test my_test;
  vector<int> myVector(5, 1);
  REQUIRE(my_test.get_vector_sum(myVector) == 5);
}

TEST_CASE("Test get_vector_sum(vector<int>& newVector)" "Various elements") {
  Sum_Test my_test;
  vector<int> myVector(1, 5);
  myVector.push_back(2);
  myVector.push_back(3);
  myVector.push_back(4);
  REQUIRE(my_test.get_vector_sum(myVector) == 14);
}

/*TODO
Create a sum method in your class which has a method that takes a vector reference of integers as parameter
It should return the sum of the elements in the list
Create a test for that
Add a new test case
Instantiate your class
create a list of integers
use the REQUIRE to test the result of the created sum method
Run them
Create different tests where you
test your method with an empyt list
with a list with one element in it
with multiple elements in it
Run them
Fix your code if needed*/

