#include <iostream>

#include "runtime/thread.h"
#include "dex_file.h"

int main() {
  std::cout << "Hello, World!" << std::endl;

  std::cout << sizeof(art::Thread::tls_ptr_sized_values);

  uint32_t checksum_ = 123;
  uint32_t *checksum_ptr;
  std::cout << sizeof(*checksum_ptr) << std::endl;
  std::cout << sizeof(checksum_ptr) << std::endl;
  std::cout << sizeof(checksum_) << std::endl;
  std::cout << sizeof(Header) << std::endl;

  return 0;
}
