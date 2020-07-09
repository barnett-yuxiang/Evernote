//
// Created by bytedance on 2020/7/9.
//

#ifndef BASIC_TEST_ATTRIBUTE_TEST_1_H_
#define BASIC_TEST_ATTRIBUTE_TEST_1_H_

namespace test_attribute {

struct sc1 {
  char a;
  char *b;
};

struct __attribute__ ((__packed__)) sc3 {
  char a;
  char *b;
};

void test1() {
  printf("sc1: sizeof-char*  = %ld\n", sizeof(struct sc1));
  printf("sc3: packed sizeof-char*  = %ld\n", sizeof(struct sc3));
}

}

#endif //BASIC_TEST_ATTRIBUTE_TEST_1_H_
