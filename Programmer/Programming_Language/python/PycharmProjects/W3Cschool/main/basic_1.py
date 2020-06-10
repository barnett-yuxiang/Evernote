from collections import deque


def parrot(voltage, state="a stiff", action='voom', type='Norwegian Blue'):
    print("-- This parrot wouldn't ", action, end=' ###')
    print("if you put", voltage, "volts through it.")
    print("-- Lovely plumage, the", type)
    print("-- It's", state, "!")


parrot(24, action='custom voom')
parrot(1000)  # 1 positional argument
parrot(voltage=1000)  # 1 keyword argument
parrot(voltage=1000000, action='VOOOOOM')  # 2 keyword arguments
parrot(action='VOOOOOM', voltage=1000000)  # 2 keyword arguments
parrot('a million', 'bereft of life', 'jump')  # 3 positional arguments
parrot('a thousand', state='pushing up the daisies')  # 1 positional, 1 keyword


def arithmetic_mean(*args):
    result = 0
    for x in args:
        result += x
    return result


print(arithmetic_mean(1, 2, 3))

a = [66.25, 333, 333, 1, 1234.5]
print(a.count(333))
a.insert(1, -2)
a.append(333)
print(a.count(333))
a.index(333)
a.remove(333)
print(a)
a.sort()
print(a)

stack = [3, 4, 5]
stack.append(6)
stack.append(7)
print(stack)
print(stack.pop())
print(stack)

queue = deque(["Eric", "John", "Michael"])
queue.append("Terry")
queue.append("Graham")
print(queue.popleft())
print(queue.pop())
print(queue)

vec = [2, 4, 6]
new_vec = [[x, x ** 2] for x in vec]
print(new_vec, type(new_vec))

# Tuples
v = (1, 2, 3, 4, 'hello')
u = v, 5, 6, 7, 'world'
print(u)

# set
basket = {'apple', 'orange', 'apple', 'pear', 'orange', 'banana'}
print('apple' in basket)

a = set('abracadabra')
b = set('alacazam')
print(a)
print(b)

print(a - b)

# dict
tel = {'jack': 4098, 'sape': 4139}
tel['gudio'] = 4127
print(tel)
del tel['sape']
print(tel)

print(dict([('sape', 4139), ('guido', 4127), ('jack', 4098)]))

dict1 = {x: x ** 2 for x in (2, 4, 6)}
print(dict1)

print(dict(sape=4139, guido=4127, jack=4098))

knights = {'gallahad': 'the pure', 'robin': 'the brave'}
for k, v in knights.items():
    print(k, v)

questions = ['name', 'quest', 'favorite color', 'more1']
answers = ['lancelot', 'the holy grail', 'blue', ]
for q, a in zip(questions, answers):
    print(q, a, end=" ^")

print("xxx")
for i in reversed(range(1, 10, 2)):
    print(i)
