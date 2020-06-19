//
// Created by bytedance on 2020/6/19.
//

#ifndef PERFETTO_TEST_TRACE_STORAGE_H
#define PERFETTO_TEST_TRACE_STORAGE_H

namespace perfetto {
namespace trace_processor {
class TraceStorage {
 public:
  void foo() { std::cout << "TraceStorage foo()" << std::endl; }
};
}
}

#endif //PERFETTO_TEST_TRACE_STORAGE_H
