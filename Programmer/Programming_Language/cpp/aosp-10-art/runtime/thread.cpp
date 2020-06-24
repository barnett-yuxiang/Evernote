//
// Created by bytedance on 2020/6/24.
//

#include <iostream>
#include "thread.h"

void art::Thread::StartTracing() {

}

void art::Thread::STopTracing(std::string out_path) {
  std::cout << out_path << std::endl;
}
