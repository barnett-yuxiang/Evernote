# Effective.Python.2nd.Edition.2019.11.
# Ch01

if __name__ == '__main__':
    a = b'h\x65llo'
    print(list(a))
    print(a)

    b = 'a\u0300 propos'
    print(list(b))
    print(b)

    c = '于礼'
    print(c.encode('utf-8'))

    key = 'my_var'
    value = 1.234
    formatted = '%-10s = %.2f' % (key, value)
    print(formatted)

    pantry = [
        ('avocados', 1.25),
        ('bananas', 2.5),
        ('cherries', 15),
    ]
    for i, (item, count) in enumerate(pantry):
        print('#%d: %-10s = %.2f' % (i, item, count))

    old_way = '%-10s = %.2f' % (key, value)
    print(old_way)
    new_way = '%(key)-10s = %(value).2f' % {'key': key, 'value': value}
    print(new_way)
