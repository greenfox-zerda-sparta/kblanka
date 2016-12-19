/*
 * apple-test.cpp
 *
 *  Created on: 2016. dec. 19.
 *      Author: Tecra_Z50
 */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Apple.h"

TEST_CASE("apple return function test") {
  Apple my_apple;
  REQUIRE(my_apple.get_Apple() == "Apple");
}
