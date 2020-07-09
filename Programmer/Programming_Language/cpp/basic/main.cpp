#include <iostream>

#include "test_attribute/test_1.h"

int main() {
  std::cout << "Hello, World!" << std::endl;

  char c[100];
  const char *p = c;
  std::string name = "nanoscope-sync";
  p = name.c_str();
  std::cout << p << std::endl;

  test_attribute::test1();

  return 0;
}
