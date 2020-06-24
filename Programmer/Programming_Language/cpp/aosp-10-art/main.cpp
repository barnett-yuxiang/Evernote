#include <iostream>
#include <thread>
#include "runtime/runtime.h"

void foo() {
  std::cout << "invoke foo()" << std::endl;
}

int main() {
  std::cout << "Hello, World!" << std::endl;

  int a = 1024;
  std::thread t1(foo);
  t1.join();
  std::cout << "Main Thread" << std::endl;

  new std::thread([]() { std::cout << "Hello, World!" << std::endl; });

  art::Runtime runtime;
  runtime.SetTargetSdkVersion(29);

  return 0;
}
