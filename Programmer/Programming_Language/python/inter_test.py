#!/usr/bin/python3

import sys

list = [1, 2, 3, 456, 'ha', [8, 9]]

for x in list:
    print(x)

print('convert to interater')

it = iter(list)
for x in it:
    print(x)

print('new sample')

# it = iter(list)
# while True:
#     try:
#         print(next(it))
#     except StopIteration:
#         sys.exit()

# fibonacci 生成器的例子


def fibonacci(n):  # 生成器函数 - 斐波那契
    a, b, counter = 0, 1, 0
    while True:
        if (counter > n):
            return
        yield a
        a, b = b, a + b
        counter += 1


f = fibonacci(10)
print(f)
while True:
    try:
        print(next(f), end=" ")
    except StopIteration:
        sys.exit()
