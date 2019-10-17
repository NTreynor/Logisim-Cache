//
// Created by mfbut on 2/19/2019.
//

#ifndef CACHE_BLOCK_H
#define CACHE_BLOCK_H
#include <vector>
class Block {

 public:
  bool contains(int tag) const;
  void updateAge(int ageAccessed);

  char at(int index) const;
  char& at(int index);

  int tag;
  int age;
  bool dirty;
  bool valid;
  std::vector<char> values;
};

#endif //CACHE_BLOCK_H
