def gen1(stop):
    print(' функция 1')
    n = 1
    while n <= stop:
        yield n
        n += 1

def gen2(start):
    print(' функция 2')
    n = start
    while n >0:
        yield n
        n -= 1

def func(n):
    print(' функция 3')
    yield from gen1(n)
    yield from gen2(n)

for n in func(5):
    print(' функция 4')
    print(n, end='')