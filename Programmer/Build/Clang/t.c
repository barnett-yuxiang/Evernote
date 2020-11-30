#include <stdio.h>

typedef float V __attribute__((vector_size(16)));
V foo(V a, V b) { return a+b*a; }

int main(int argc, char **argv) { printf("hello world\n"); }

