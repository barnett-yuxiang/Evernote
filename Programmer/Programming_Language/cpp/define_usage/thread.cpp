//
// Created by bytedance on 2020/6/15.
//

#include <iostream>
#include <fstream>
#include "thread.h"

void Thread::TraceStart(const char *name) {
    std::cout << "" << std::endl;
}

void Thread::flush_trace_data() {
    std::ofstream out_trace_tmp("./trace.tmp", std::ofstream::trunc);
    if (out_trace_tmp.is_open()) {
        out_trace_tmp << time(nullptr) << ":" << "pretty_method" << "\n";
    } else {
        std::cout << "out_trace_tmp is not opened" << std::endl;
    }
}