//
// Created by bytedance on 2020/6/24.
//

#ifndef AOSP_10_ART_RUNTIME_RUNTIME_H_
#define AOSP_10_ART_RUNTIME_RUNTIME_H_

#include <cstdint>

namespace art {

class Runtime {
 public:
  void SetTargetSdkVersion(uint32_t version);

};

}

#endif //AOSP_10_ART_RUNTIME_RUNTIME_H_
