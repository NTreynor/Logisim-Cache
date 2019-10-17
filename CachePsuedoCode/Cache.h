//
// Created by mfbut on 2/19/2019.
//

#ifndef CACHEPSUEDOCODE_CACHE_H
#define CACHEPSUEDOCODE_CACHE_H
#include "Set.h"
#include "Block.h"
#include "Address.h"

#include <vector>
class Cache {

 public:
  char read(Address address);
  void write(char value, Address address);
 private:
  bool contain(const Address& address);

  std::vector<Set> sets;
};

#endif //CACHEPSUEDOCODE_CACHE_H
