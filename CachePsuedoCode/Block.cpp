//
// Created by mfbut on 2/19/2019.
//

#include "Block.h"

bool Block::contains(int tag) const {
  return this->tag == tag;
}

void Block::updateAge(int ageAccessed) {
  if(age == ageAccessed){
    age = 0;
  } else if(age < ageAccessed){
    age+=1;
  }else{
    //age = age;
  }
}

char Block::at(int index) const{
  return values.at(index);
}

char& Block::at(int index) {
  return values.at(index);
}
