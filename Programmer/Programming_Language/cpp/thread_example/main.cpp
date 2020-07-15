#include <iostream>
#include <thread>

void task(std::string msg) {
  std::cout << "task says: " << msg << std::endl;
}

int main() {

  std::thread t1(task, "Hello");

  // Makes the main thread wait for the new thread to finish execution, therefore blocks its own execution.
  t1.join();

  return 0;
}
