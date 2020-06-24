//

#include <iostream>
#include <typeinfo>
#include <vector>

#include "changkun_gitbook/bar.h"

int main() {
  std::cout << "Hello, World!" << std::endl;

  auto i = 5;
  auto j = 5.6;
  std::cout << typeid(i).name() << std::endl;
  std::cout << typeid(j).name() << std::endl;

  add(1, 2.1);

  // for
  auto array = {1, 2, 3};
  for (auto &item : array) {
    std::cout << item << std::endl;
  }

  std::vector<int> arr(5, 100);
  for (std::vector<int>::iterator element = arr.begin(); element != arr.end(); ++element) {
    std::cout << *element << std::endl;
  }

  struct A {
    A(int _a, float _b) : a(_a), b(_b) {}

   private:
    int a;
    float b;
  };

  A a1(1, 3.14);
  A a2{1, 3.14};

  std::cout << typeid(a1).name() << "  " << typeid(a2).name() << std::endl;

  return 0;
}
