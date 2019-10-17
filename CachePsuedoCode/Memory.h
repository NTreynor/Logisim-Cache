//
// Created by mfbut on 2/21/2019.
//

#ifndef CACHE_MEMORY_H
#define CACHE_MEMORY_H
#include "Address.h"
#include "Block.h"

class Memory {
 public:
  Block read(const Address& address) const;
  void write(const Block& block, const Address& address);
};

#endif //CACHE_MEMORY_H
