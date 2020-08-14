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

    for i, (item, count) in enumerate(pantry):
        before = '#%d: %-10s = %d' % (
            i + 1,
            item.title(),
            round(count)
        )

        after = '#%(loop)d: %(item)-10s = %(count)d' % {
            'loop': i + 1,
            'item': item.title(),
            'count': round(count)
        }

        assert before == after

    formatted = f'{key!r:<10} = {value:.2f}'
    print(formatted)

    # item 6
    favorite_snacks = {
        'salty': ('pretzels', 100),
        'sweet': ('cookies', 180),
        'veggie': ('carrots', 20),
    }

    ((type1, (name1, cals1)),
     (type2, (name2, cals2)),
     (type3, (name3, cals3))) = favorite_snacks.items()

    print(f'Favorite {type1:<10} is {name1:<10} with {cals1:<5} calories')
    print(f'Favorite {type2:<10} is {name2:<10} with {cals2:<5} calories')
    print(f'Favorite {type3:<10} is {name3:<10} with {cals3:<5} calories')

    flavor_list = ['vanilla', 'chocolate', 'pecan', 'strawberry']
    for i, flavor in enumerate(flavor_list, 10):
        print(f'{i}: {flavor}')


