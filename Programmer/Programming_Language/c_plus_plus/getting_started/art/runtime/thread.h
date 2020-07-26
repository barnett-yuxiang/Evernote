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
};

}

#endif //GETTING_STARTED_ART_RUNTIME_THREAD_H_
