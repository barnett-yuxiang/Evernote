#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

  std::string content = R"(-(\d+)\s+\(?\s*(\d+|-+)?\)?\s?\[(\d+)\]\s*)" R"([a-zA-Z0-9.]{0,5}\s+(\d+\.\d+):\s+(\S+):)";

  std::cout << content << std::endl;

  return 0;
}
