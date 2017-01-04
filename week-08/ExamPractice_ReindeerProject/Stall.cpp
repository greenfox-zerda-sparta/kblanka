/*
 * Stall.cpp
 *
 *  Created on: 2016. dec. 15.
 *      Author: Tecra_Z50
 */
#include <iostream>
#include "Stall.h"
#include "ToString.h"

using namespace std;

Stall::Stall(string stall_name, unsigned int hay, unsigned int _presents) {
  this->stall_name = stall_name;
  stored_hay = hay;
  presents = _presents;
}

void Stall::add_reindeer(string type) throw(const char*) {
  if (type == "RedNose") {
    reindeer_stall.push_back(new RedNose);
  }
  else if (type == "NormalNose") {
   reindeer_stall.push_back(new NormalNose);
  }
  else {
    throw "This reindeer type does not exist.";
  }
}

void Stall::feed_all_reindeer() throw(const char*) {
  if(is_there_hay_in_storage()) {
    feed_all_RedNose();
    feed_all_NormalNose();
  }
  else {
    throw "No available hay in the storage.";
  }
}

bool Stall::is_there_hay_in_storage() {
  return stored_hay != 0;
}

void Stall::feed_all_RedNose() {
  for (unsigned int i = 0; i < reindeer_stall.size(); i++) {
    if (reindeer_stall[i]->getType() == "RedNose") {
      reindeer_stall[i]->feed_reindeer(stored_hay);
    }
  }
}

void Stall::feed_all_NormalNose() {
  for (unsigned int i = 0; i < reindeer_stall.size(); i++) {
    if (reindeer_stall[i]->getType() == "NormalNose") {
      reindeer_stall[i]->feed_reindeer(stored_hay);
    }
  }
}

void Stall::add_present_to_reindeers() throw(const char*) {
  if(is_there_present_storage()) {
    add_present_to_RedNose();
    add_present_to_NormalNose();
  }
  else {
    throw "No more present in the storage, christmas is over.";
  }
}

void Stall::add_present_to_RedNose() {
  for (unsigned int i = 0; i < reindeer_stall.size(); i++) {
    if(reindeer_stall[i]->getType() == "RedNose") {
      reindeer_stall[i]->add_present(presents);
    }
  }
}

void Stall::add_present_to_NormalNose() {
  for (unsigned int i = 0; i < reindeer_stall.size(); i++) {
    if(reindeer_stall[i]->getType() == "NormalNose") {
      reindeer_stall[i]->add_present(presents);
    }
  }
}

bool Stall::is_there_present_storage() {
  return presents != 0;
}

void Stall::christmas_time() {
  cout << "Merry Christmas, let's go to work!" << endl;
  for (unsigned int i = 0; i < reindeer_stall.size(); i++) {
    reindeer_stall[i]->go_to_work();
  }
}

string Stall::getStatus() {
  string status = "";
  if (health_status == 0) {
    return "The reindeers need some rest!";
  }
  else {
    status = stall_name + "\n" + "Reindeer count: " + ToString(reindeer_stall.size())
        + ", Hay Storage: " + ToString(stored_hay) + ", Present Storage: " + ToString(presents) + "\n";
    for (unsigned int i = 0; i < reindeer_stall.size(); i++) {
      status += reindeer_stall[i] -> getStatus() + "\n";
    }
  }
  return status;
}

Stall::~Stall() {
  for (unsigned int i = 0; i < reindeer_stall.size(); i++) {
    delete reindeer_stall[i];
  }
}

