//
// Created by bytedance on 2020/7/8.
//

#ifndef AOSP_10_ART_RUNTIME_ART_METHOD_H_
#define AOSP_10_ART_RUNTIME_ART_METHOD_H_

#include <cstdint>
namespace art {

class ArtMethod final {
 protected:
  uint32_t dex_code_item_offset_;
  uint32_t dex_method_index_;
  uint32_t a_;
  uint32_t b_;
};

}

#endif //AOSP_10_ART_RUNTIME_ART_METHOD_H_
