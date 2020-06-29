#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

  char c[100];
  const char *p = c;
  std::string name = "nanoscope-sync";
  p = name.c_str();
  std::cout << p << std::endl;

  return 0;
}
