print('введите первое число')
a = int(input())

print('введите второе число')
b = int(input())

print('введите действие')
zn = input()

def ymn():
    print(a*b)

def delen():
    print(a//b)

def sl():
    print(a+b)

def vch():
    print(a-b)

if zn == '*':
    print(ymn())

if zn == ':':
    print(delen())

if zn == '+':
    print(sl())

if zn == '-':
    print(vch())