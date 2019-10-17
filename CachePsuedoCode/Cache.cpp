//
// Created by mfbut on 2/19/2019.
//

#include "Cache.h"

Block& Cache::findBlock(Address address) {
  Set& curSet = sets.at(address.setBits);
  if(!contain(address)){
    Block& block2Evict = curSet.findBlock2Evict();
    if(block2Evict.dirty){
      memory.write(block2Evict);

    }
    block2Evict = memory.read(address);

  }
  Block& blockAccessed = sets.at(address.setBits).find(address.tag);
  sets.at(address.setBits).updateAges(blockAccessed);

  return blockAccessed;
}

char Cache::read(Address address) {
  const Block& blockAccessed = findBlock(address);
  return blockAccessed.at(address.offset);
}

void Cache::write(char value, Address address) {
  Block& blockAccessed = findBlock(address);
  blockAccessed.at(address.offset) = value;
  blockAccessed.dirty = (true);
}

bool Cache::contain(const Address& address) {
  return sets.at(address.setBits).contains(address);
}
