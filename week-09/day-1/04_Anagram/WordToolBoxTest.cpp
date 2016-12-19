/*
 * WordToolBoxTest.cpp
 *
 *  Created on: 2016. dec. 19.
 *      Author: Tecra_Z50
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "WordToolBox.h"
using namespace std;

TEST_CASE("1st Check - check for 'a'") {
  WordToolBox my_test("Tarzan's toenails");
  REQUIRE(my_test.countHowMany('a') == 3);
}

TEST_CASE("2nd Check - check for multiple chars") {
  WordToolBox my_test("Me Tarzan, You Jane");
  REQUIRE(my_test.countHowMany('J') == 1);
  REQUIRE(my_test.countHowMany('T') == 1);
  REQUIRE(my_test.countHowMany('e') == 2);
  REQUIRE(my_test.countHowMany('a') == 3);
}

TEST_CASE("3nd Check - get function") {
  WordToolBox my_test("Apple");
  REQUIRE(my_test.getS() == "apple");
  REQUIRE(my_test.countHowMany('p') == 2);
}

TEST_CASE("4nd Check - is Anagram?") {
  WordToolBox my_test("Apple");
  REQUIRE(my_test.isAnAnagram("Paple") == true);
}

TEST_CASE("5nd Check - is Anagram?") {
  WordToolBox my_test("Apple");
  REQUIRE_FALSE(my_test.isAnAnagram("Pear"));
}

TEST_CASE("6nd Check - blank case 1") {
  WordToolBox my_test("");
  REQUIRE_FALSE(my_test.isAnAnagram("Pear"));
}

TEST_CASE("7nd Check - blank case 1") {
  WordToolBox my_test("Morgen");
  REQUIRE_FALSE(my_test.isAnAnagram(""));
}
