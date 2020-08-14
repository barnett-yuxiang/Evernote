# Effective.Python.2nd.Edition.2019.11.
# Ch02

def generate_csv():
    yield 'Date', 'Make', 'Model', 'Year', 'Price'


if __name__ == '__main__':
    a = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
    print(a[-3:])
    print(a[:-1])

    b = a[:]
    print(b)
    print(b[-1:])

    short_list = [1, 2, 3, 4]
    first, second, *other = short_list
    print(first, second, other)

    it = iter(range(1, 3))
    first, second = it
    print(f'{first} and {second}')

    all_csv_rows = list(generate_csv())
    header = all_csv_rows[0]
    rows = all_csv_rows[1:]
    print('CSV Header:', header)
    print('Row count: ', len(rows))

    it = generate_csv()
    header, *rows = it
    print('CSV Header:', header)
    print(rows)
    print('Row count: ', len(rows))
