#include <iostream>
#include "art/runtime/thread.h"

using std::cout;
using std::endl;

int main() {
  cout << "Hello, World!" << endl;

  art::Thread mainThread{};

  mainThread.StartTracing();

  mainThread.TraceStart(101);
  mainThread.TraceStart(102);
  mainThread.TraceEnd();
  mainThread.TraceEnd();
  mainThread.TraceStart(103);
  mainThread.TraceStart(104);
  mainThread.TraceEnd();
  mainThread.TraceEnd();

  mainThread.FlushV2();

  cout << mainThread.trace_data << endl;
  cout << mainThread.trace_data_ptr << endl;
  cout << mainThread.trace_data_ptr - mainThread.trace_data << endl;

  mainThread.StopTracing();

  return 0;
}
