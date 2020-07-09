//
// Created by bytedance on 2020/7/9.
//

#ifndef BASIC_TEST_BASE_TEST_1_H_
#define BASIC_TEST_BASE_TEST_1_H_

#include <stdint.h>

namespace test_base {

struct tls {
  tls() : trace_data_ptr(nullptr), card_table(nullptr) {}

  int64_t *trace_data_ptr;

  uint8_t *card_table;

} tls_;

void test() {
  printf("%ld\n", sizeof(tls));
  int64_t data = 1024;
  tls_.trace_data_ptr = &data;
  printf("%lld\n", *tls_.trace_data_ptr);
}

}

#endif //BASIC_TEST_BASE_TEST_1_H_
