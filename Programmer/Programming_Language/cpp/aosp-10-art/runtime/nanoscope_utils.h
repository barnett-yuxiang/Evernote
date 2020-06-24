//
// Created by bytedance on 2020/6/24.
//

#ifndef AOSP_10_ART_RUNTIME_NANOSCOPE_UTILS_H_
#define AOSP_10_ART_RUNTIME_NANOSCOPE_UTILS_H_

#include <iostream>

namespace art {

std::string GetPackageName() {
  std::cout << "GetPackageName" << std::endl;
  return "GetPackageName";
}

}

#endif //AOSP_10_ART_RUNTIME_NANOSCOPE_UTILS_H_
