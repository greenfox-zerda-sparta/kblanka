#include <string>
#include <iostream>

using namespace std;

int market_price_sqm = 400;

struct House {
  string address;
  int price_in_eur;
  int number_of_rooms;
  int area_in_sqm;
};

void worth_to_buy_or_not(House test) {
  if (test.price_in_eur / test.area_in_sqm < 400)
    cout << "worth to buy!";
  else
    cout << "too expensive compared to the market price, not worth to buy.";
}

int count_worth_to_buy(House array[], int length) {
  int worth = 0;
  for (int i = 0; i < length; i++) {
    if((array[i].price_in_eur / array[i].area_in_sqm) < market_price_sqm) {
      worth++;
    }
  }
  return worth;
}

// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
//
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a refrence to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)
//
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
//
// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

int main() {
House houses[] {
  {"Monor", 30000, 5, 100},
  {"Gyomro", 200000, 3, 30},
  {"Vecses", 10000, 4, 80},
  {"Gomba", 100000, 6, 120},
  {"Benye", 5000, 2, 60},
  {"Kava", 4000, 1, 20}
};
cout << "The house located in " << houses[0].address << " is ";
worth_to_buy_or_not(houses[0]);
cout << endl;
cout << "The house located in " << houses[1].address << " is ";
worth_to_buy_or_not(houses[1]);
cout << endl;
cout << "Number of houses worth to buy is " << count_worth_to_buy(houses, 6) << ".";

  return 0;
}
