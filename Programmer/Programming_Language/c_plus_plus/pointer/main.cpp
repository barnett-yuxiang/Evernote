#include <iostream>

#include "runtime/thread.h"

int main() {
  std::cout << "Hello, World!" << std::endl;

  std::cout << sizeof(art::Thread::tls_ptr_sized_values);

  return 0;
}
