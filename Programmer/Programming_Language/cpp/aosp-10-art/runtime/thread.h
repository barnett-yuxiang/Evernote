//
// Created by bytedance on 2020/6/24.
//

#ifndef AOSP_10_ART_RUNTIME_THREAD_H_
#define AOSP_10_ART_RUNTIME_THREAD_H_

#include <string>

namespace art {

class Thread {
 public:
  void StartTracing();
  void STopTracing(std::string out_path);
};

}

#endif //AOSP_10_ART_RUNTIME_THREAD_H_
