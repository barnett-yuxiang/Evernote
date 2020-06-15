#include <iostream>
#include "HTraceStart.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    HTraceStart hs;
    std::cout << hs.DebugName() << std::endl;
    return 0;
}
