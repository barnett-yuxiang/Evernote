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

struct __attribute__ ((aligned(4))) sc5 {
  char a;
  char *b;
};

struct __attribute__ ((aligned(4))) sc6 {
  char a;
  char b[];
};

struct __attribute__ ((aligned(2))) sc7 {
  char a;
  char *b;
};
struct __attribute__ ((aligned(2))) sc8 {
  char a;
  char b[];
};

void test1() {
  char a;
  char *b;
  char c[10];
  printf("%ld\n", sizeof(a));
  printf("%ld\n", sizeof(b));
  printf("%ld\n", sizeof(c));
  printf("sc1: sizeof-char*  = %ld\n", sizeof(struct sc1));
  printf("sc3: packed sizeof-char*  = %ld\n", sizeof(struct sc3));
  printf("sc5: aligned 4 sizeof-char*  = %ld\n", sizeof(struct sc5));
  printf("sc6: aligned 4 sizeof-char[] = %ld\n", sizeof(struct sc6));
  printf("sc7: aligned 2 sizeof-char*  = %ld\n", sizeof(struct sc7));
  printf("sc8: aligned 2 sizeof-char[] = %ld\n", sizeof(struct sc8));
}

}

#endif //BASIC_TEST_ATTRIBUTE_TEST_1_H_
