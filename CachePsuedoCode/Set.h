//
// Created by mfbut on 2/19/2019.
//

#ifndef CACHE_SET_H
#define CACHE_SET_H
#include <vector>
#include "Address.h"
#include "Block.h"
class Set {
 public:
  Block& at(int position);
  const Block& at(int position) const;

  void updateAges(const Block& blockAccessed);
  bool contains(Address address);
  Block& find(int tag);
  Block& findBlock2Evict();

 private:
  std::vector<Block> blocks;
};

#endif //CACHE_SET_H
