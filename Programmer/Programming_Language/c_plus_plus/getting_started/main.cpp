#include <iostream>
#include "art/runtime/thread.h"

using std::cout;
using std::endl;

int main() {
  cout << "Hello, World!" << endl;

  art::Thread mainThread{};

  mainThread.StartTracing();

  mainThread.Flush();

  mainThread.StopTracing();

  return 0;
}
