#include <iostream>

#include "trace_processor/trace_processor_context.h"

int main() {
  std::cout << "Hello, World!" << std::endl;

  perfetto::trace_processor::TraceProcessorContext tpc;
  std::cout << tpc.storage.get() << std::endl;
  tpc.storage->foo();

  return 0;
}
