#include <iostream>
#include <thread>
#include "runtime/runtime.h"
#include "runtime/art_method.h"

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

  int64_t array[40000];
  int64_t *trace_data_ptr = array;
  std::cout << sizeof array << std::endl;
  std::cout << sizeof(trace_data_ptr) << std::endl;

  auto *data_ptr = new int64_t[40];
  auto *pAm = new art::ArtMethod();
  auto i64_p = reinterpret_cast<int64_t *>(pAm);
  std::cout << "^_^ " << sizeof(art::ArtMethod) << std::endl;
  std::cout << "^_^ " << sizeof(*pAm) << std::endl;

  return 0;
}
