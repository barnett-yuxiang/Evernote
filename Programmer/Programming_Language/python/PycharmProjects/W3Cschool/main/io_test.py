#!/usr/bin/python3
# Lesson 4

print('We are the {} who say "{}!"'.format('knights', 'Ni'))
print('{0} and {1}'.format('You', 'Me'))
print('{1} and {0}'.format('You', 'Me'))

f = open('./workfile.txt', 'r')
# print(f.readline())
# print('---')
# print(f.read())
# print('---')
# f.write(str(('this answer', 42)))
# print((f.readlines()))
print(f.readline())
print(f.tell())
f.close()