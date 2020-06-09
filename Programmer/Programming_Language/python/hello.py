#!/usr/bin/python3
print('Hello, World!')

'''
this is comment
'''
print("Hello World!")

a = 1
b = 1.23
c = 3E-2
print(a)
print(b)
print(c)

d = 1 + 2j
print(d)

e1 = r"this is an unicode string \n"
e2 = "this is an unicode string \n"
print(e1)
print(e2)
print("this" " is " "string")

a, b, c, d, e = 20, 5.5, True, 1 + 2j, 'hello'
print(type(a), type(b), type(c), type(d), type(e))

s = 'Yes,he doesn\'t'
print(s, type(s), len(s))

print('str' + 'ing', '1', 'my' * 3)

a = ['home', 25, 'her']
print(a)

a = [1, 2, 3] + [4, 5]
print(a)

b = (2020, 1 + 2j, "hello", 'world')
print(b, b[1:2])