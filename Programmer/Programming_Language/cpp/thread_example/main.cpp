#include <iostream>
#include <thread>

void task(std::string msg) {
  std::cout << "task says: " << msg << " [" << std::this_thread::get_id() << "]" << std::endl;
}

int main() {

  std::thread t1(task, "Hello");

  std::thread threadObj([] {
    for (int i = 0; i < 5; i++) {
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
      std::cout << "Display Thread Executing [" << std::this_thread::get_id() << "]" << std::endl;
    }
  });

  std::atomic<bool> thread_ready(false);
  std::thread t2([&thread_ready] {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    thread_ready = true;
    std::cout << "android::base::SetProperty(...) " << thread_ready << std::endl;
  });

  // Makes the main thread wait for the new thread to finish execution, therefore blocks its own execution.
  t1.join();
  threadObj.join();
  t2.join();

  return 0;
}
