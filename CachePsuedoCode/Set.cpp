//
// Created by mfbut on 2/19/2019.
//

#include "Set.h"

Block& Set::at(int position) {
  return blocks.at(position);
}

const Block& Set::at(int position) const {
  return blocks.at(position);
}

void Set::updateAges(const Block& blockAccessed) {
  int ageAccessed = blockAccessed.age;
  for(auto & block : blocks){
    block.updateAge(ageAccessed);
  }

}

bool Set::contains(Address address) {
  for(const auto& block : blocks){
    if(block.contains(address.tag)){
      return true;
    }
  }

  return false;
}


Block& Set::find(int tag) {
  for( auto& block : blocks){
    if(block.contains(tag)){
      return block;
    }
  }}

Block& Set::findBlock2Evict() {
  Block* block2Evict = &blocks.front();

  for(auto itr = blocks.begin() + 1; itr != blocks.end(); ++itr){
    if(itr->age > block2Evict.age){
      block2Evict = &(*itr);
    }
  }
  return *block2Evict;
}


