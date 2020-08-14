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
