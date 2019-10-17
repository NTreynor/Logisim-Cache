//
// Created by mfbut on 2/21/2019.
//

#include "Memory.h"

Block Memory::read(const Address& address) const {
  Block block;

  //read values from address.tag : address.setBits
  block.tag = address.tag;
  block.valid = true;
  block.dirty = false;


  return block;
}

void Memory::write(const Block& block, const Address& address) {
  //write values starting from block.tag : address.setBits
}
