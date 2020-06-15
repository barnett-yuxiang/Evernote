#include <iostream>
#include "HTraceStart.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    HTraceStart hs;
    std::cout << hs.DebugName() << std::endl;
    Thread::flush_trace_data();
    return 0;
}
