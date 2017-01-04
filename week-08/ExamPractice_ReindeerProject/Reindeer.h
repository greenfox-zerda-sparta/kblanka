/*
 * Reindeer.h
 *
 *  Created on: 2016. dec. 15.
 *      Author: Tecra_Z50
 */

#ifndef REINDEER_H_
#define REINDEER_H_
#include <string>

using namespace std;

class Reindeer {
protected:
  string type;
  unsigned int hay, max_hay, max_present_carry, present;
public:
  Reindeer();
  void feed_reindeer(unsigned int& hay_storage);
  void add_present(unsigned int& present_storage);
  void go_to_work();
  string getType();
  string getStatus();
  virtual ~Reindeer();
};

#endif /* REINDEER_H_ */
