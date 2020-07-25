//
// Created by yuli on 2020/7/20.
//

#ifndef ART_LIBDEXFILE_DEX_DEX_FILE_H_
#define ART_LIBDEXFILE_DEX_DEX_FILE_H_

#include <cstdint>

namespace art {

class DexFile {
 public:

  // Raw header_item.
  struct Header {
    uint8_t magic_[8] = {};
  };



};

}

#endif //ART_LIBDEXFILE_DEX_DEX_FILE_H_
