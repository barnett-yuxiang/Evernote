//
// Created by yuli on 2020/8/13.
//

#ifndef POINTER_RUNTIME_THREAD_H_
#define POINTER_RUNTIME_THREAD_H_

#include <cstdint>
namespace art {

class Thread {

 public:
  struct tls_ptr_sized_values {
    tls_ptr_sized_values() : trace_data_ptr(nullptr), trace_data(nullptr),
                             name(nullptr) {}

    int64_t *trace_data_ptr;

    int64_t *trace_data;

    std::string *name;
  };

};

}

#endif //POINTER_RUNTIME_THREAD_H_
