#include <iostream>

int main() {
  std::cout << "1. Hello, World!" << std::endl;

  int num = 100;
  auto fun = [](int num) {
    num = 200;
    std::cout << "2. Hello, World!" << std::endl;
    std::cout << num << std::endl;
  };
  fun(100);
  std::cout << num << std::endl;

  std::cout << "3. Hello, World!" << std::endl;
  return 0;
}
