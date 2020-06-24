//
// Created by bytedance on 2020/6/24.
//

#ifndef MODERN_TUTORIAL_CHANGKUN_GITBOOK_SMART_POINTER_TEST_H_
#define MODERN_TUTORIAL_CHANGKUN_GITBOOK_SMART_POINTER_TEST_H_

#include <iostream>
#include <memory>

void foo(std::shared_ptr<int> i) {
  (*i)++;
}

void test() {
  auto pointer = std::make_shared<int>(10);
  foo(pointer);
  std::cout << *pointer << std::endl;
  std::cout << pointer.use_count();
}

#endif //MODERN_TUTORIAL_CHANGKUN_GITBOOK_SMART_POINTER_TEST_H_
