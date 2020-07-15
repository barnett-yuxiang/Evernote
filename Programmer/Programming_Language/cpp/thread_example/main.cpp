#include <iostream>
#include <thread>

void task(std::string msg) {
  std::cout << "task says: " << msg << " [" << std::this_thread::get_id() << "]" << std::endl;
}

int main() {

  std::thread t1(task, "Hello");

  std::thread threadObj([] {
    for (int i = 0; i < 5; i++)
      std::cout << "Display Thread Executing [" << std::this_thread::get_id() << "]" << std::endl;
  });

  // Makes the main thread wait for the new thread to finish execution, therefore blocks its own execution.
  t1.join();
  threadObj.join();

  return 0;
}
