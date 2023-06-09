//
// Created by yuli on 2020/7/26.
//

#ifndef GETTING_STARTED_ART_RUNTIME_THREAD_H_
#define GETTING_STARTED_ART_RUNTIME_THREAD_H_

#include <cstddef>
namespace art {

enum TraceDataCapacity {
  kSmall = 3,
  kLarge = 40000000,
};

class Thread final {
 public:
  int64_t *trace_data_ptr;
  int64_t *trace_data;
  size_t trace_data_cnt;

  Thread() : trace_data_ptr(nullptr), trace_data(nullptr), trace_data_cnt(TraceDataCapacity::kSmall) {}

  void Flush() const {
    if (trace_data_ptr != nullptr) {
      std::cout << "Flushing Start ...\n";
      int64_t *ptr = trace_data;
      while (ptr < trace_data_ptr) {
        std::cout << *ptr++ << std::endl;
      }
      std::cout << "Flushing Finish...\n";
    }
  }

  void FlushV2() const {
    if (trace_data_ptr != nullptr) {
      std::cout << "Flushing Start ...\n";
      int64_t *ptr = trace_data;
      for (int i = 0; i < TraceDataCapacity::kSmall; i++) {
        std::cout << *(ptr + i) << std::endl;
      }
      std::cout << "Flushing Finish...\n";
    }
  }

  void StartTracing() {
    trace_data = new int64_t[TraceDataCapacity::kSmall];
    trace_data_ptr = trace_data;
  }

  void StopTracing() {
    trace_data = nullptr;
    trace_data_ptr = nullptr;
  }

  void TraceStart(int64_t a) {
    if (trace_data_ptr != nullptr) {
      *trace_data_ptr = a;
      trace_data_ptr++;
      if (trace_data_ptr - trace_data >= kSmall) {
        trace_data_ptr = trace_data;
      }
    }
  }

  void TraceEnd() {
    if (trace_data_ptr != nullptr) {
      *trace_data_ptr = 0;
      trace_data_ptr++;
      if (trace_data_ptr - trace_data >= kSmall) {
        trace_data_ptr = trace_data;
      }
    }
  }
};

}

#endif //GETTING_STARTED_ART_RUNTIME_THREAD_H_
