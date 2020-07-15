#include <iostream>
#include <thread>

void task(std::string msg) {
  std::cout << "task says: " << msg << std::endl;
}

int main() {

  std::thread t1(task, "Hello");
  t1.join();

  return 0;
}
