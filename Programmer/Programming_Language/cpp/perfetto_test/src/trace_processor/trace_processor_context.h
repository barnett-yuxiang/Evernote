//
// Created by bytedance on 2020/6/19.
//

#ifndef PERFETTO_TEST_TRACE_PROCESSOR_CONTEXT_H
#define PERFETTO_TEST_TRACE_PROCESSOR_CONTEXT_H

#include <memory>
#include "storage/trace_storage.h"

namespace perfetto {

namespace trace_processor {
class TraceStorage;

class TraceProcessorContext {
 public:
  TraceProcessorContext() {};

  ~TraceProcessorContext() {};

  std::unique_ptr<TraceStorage> storage;
};
}
}

#endif //PERFETTO_TEST_TRACE_PROCESSOR_CONTEXT_H
