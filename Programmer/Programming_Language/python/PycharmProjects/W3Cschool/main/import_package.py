#!/usr/bin/python3
# Filename: import_package.py

import support
import sys
from sound.effects import *

# 现在可以调用模块里包含的函数了
support.print_func("w3cschool")

print(sys.path)

print(dir(support))
print(dir(sys))

echo.echo_foo()
other1.other1_foo()
