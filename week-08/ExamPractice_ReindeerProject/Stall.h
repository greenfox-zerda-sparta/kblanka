/*
 * Stall.h
 *
 *  Created on: 2016. dec. 15.
 *      Author: Tecra_Z50
 */

#ifndef STALL_H_
#define STALL_H_
#include <vector>
#include "Reindeer.h"
#include "RedNose.h"
#include "NormalNose.h"
using namespace std;

class Stall {
protected:
  string stall_name;
  vector<Reindeer*> reindeer_stall;
  unsigned int stored_hay, health_status, presents;
public:
  Stall(string stall_name, unsigned int hay, unsigned int presents);
  void add_reindeer(string type) throw(const char*);
  void feed_all_reindeer() throw(const char*);
  void feed_all_RedNose();
  void feed_all_NormalNose();
  void add_present_to_reindeers() throw(const char*);
  void add_present_to_RedNose();
  void add_present_to_NormalNose();
  void christmas_time(); // every reindeer go to work
  bool is_there_present_storage();
  bool is_there_hay_in_storage();
  string getStatus();
  virtual ~Stall();
};

#endif /* STALL_H_ */
