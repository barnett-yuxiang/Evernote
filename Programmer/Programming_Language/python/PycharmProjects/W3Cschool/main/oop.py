#!/usr/bin/python3


class MyClass:
    """ This is simple class """
    i = 12345

    def foo(self):
        return "Hello", self


x = MyClass()
print(type(x.foo()), x.foo())


class Complex:
    def __init__(self, real_part, imag_part):
        self.r = real_part
        self.i = imag_part


x = Complex(1, 2)
print(x.i, x.r)


class Person:
    name = ''
    age = 0
    __weight = 0

    def __init__(self, n, a, w):
        self.name = n
        self.age = a
        self.__weight = w

    def speak(self):
        print("{} say: i am {} old, and weight is {}".format(self.name, self.age, self.__weight))


class Student(Person):
    grade = ''

    def __init__(self, n, a, w, g):
        Person.__init__(self, n, a, w)
        self.grade = g

    def speak(self):
        Person.speak(self)
        print("%s 说: 我 %d 岁了，我在读 %d 年级" % (self.name, self.age, self.grade))


p = Person("yuxiang", 30, 88)
p.speak()
s = Student("yuqing", 1.1, 20, -1)
s.speak()


class JustCounter:
    __secretCount = 0
    publicCount = 0

    def count(self):
        self.__secretCount += 1
        self.publicCount += 1


counter = JustCounter()
counter.count()
counter.count()
print(counter.publicCount)
# print(counter.__secretCount)

