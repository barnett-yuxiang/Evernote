//
// Created by yuxiang on 2020/7/20.
//

#ifndef ART_LIBARTBASE_BASE_ARENA_OBJECT_H_
#define ART_LIBARTBASE_BASE_ARENA_OBJECT_H_

#include <cstddef>
#include <iostream>

namespace art {

class ArenaObject {
 public:
  void* operator new(size_t size) {
    std::cout << "size: " << size << std::endl;
    return new ArenaObject();
  }
};

}

#endif //ART_LIBARTBASE_BASE_ARENA_OBJECT_H_
