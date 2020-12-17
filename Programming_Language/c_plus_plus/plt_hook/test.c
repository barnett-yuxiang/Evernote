//
// Created by yuli on 2020/10/14.
//

#include <stdlib.h>
#include <stdio.h>

void say_hello() {
  char *buf = (char *) malloc(1024);
  if (NULL != buf) {
    snprintf(buf, 1024, "%s", "hello\n");
    printf("%s", buf);
  }
}
