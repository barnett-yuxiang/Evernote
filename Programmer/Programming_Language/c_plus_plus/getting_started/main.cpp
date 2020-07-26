#include <iostream>
#include "art/runtime/thread.h"

using std::cout;
using std::endl;

int main() {
  cout << "Hello, World!" << endl;

  art::Thread mainThread{};

  // Tracing
  mainThread.trace_data = new int64_t[mainThread.trace_data_cnt];
  mainThread.trace_data_ptr = mainThread.trace_data;

  // Trace Start 1 2 3
  *mainThread.trace_data_ptr++ = 101;
  *mainThread.trace_data_ptr++ = 0;

  *mainThread.trace_data_ptr++ = 102;
  *mainThread.trace_data_ptr++ = 0;

  *mainThread.trace_data_ptr++ = 103;
  *mainThread.trace_data_ptr++ = 0;

  // Flush
  cout << "Flushing Start...\n";
  int64_t *ptr = mainThread.trace_data;
  while (ptr < mainThread.trace_data_ptr) {
    cout << *ptr++ << endl;
  }
  cout << "Flushing Success...\n";

  return 0;
}
