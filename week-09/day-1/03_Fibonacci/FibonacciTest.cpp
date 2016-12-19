/*
 * FibonacciTest.cpp
 *
 *  Created on: 2016. dec. 19.
 *      Author: Tecra_Z50
 */

#define CATCH_CONFIG_MAIN
#include "FibonacciTest.h"
#include "catch.hpp"
#include <vector>

using namespace std;

int FibonacciTest::return_fib(int num) {
  if (num == 0 || num == 1) {
    return num;
  } else if (num < 0) {
    throw "Error: the index cannot be a negative number";
  } else {
    return return_fib(num - 1) + return_fib(num - 2);
  }
}

TEST_CASE("Fibonacci Test" "Case 1: 1") {
  FibonacciTest my_test;
  REQUIRE(my_test.return_fib(1) == 1);
}

TEST_CASE("Fibonacci Test" "Case 2: -3") {
  FibonacciTest my_test;
  REQUIRE(my_test.return_fib(-3));
}

TEST_CASE("Fibonacci Test" "Case 3: 4") {
  FibonacciTest my_test;
  REQUIRE(my_test.return_fib(4) == 3);
}

//Write a function that computes a member of the fibonacci sequence by a given index
//Create tests that covers all types of input (like in the previous workshop exercise)
