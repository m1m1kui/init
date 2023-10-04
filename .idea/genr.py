class MyNumbers:
    def __inter__(selfself):
        self.a = 1
        return selfself

    def __next__(self):
        x = self.a
        self.a += 1
        return x


myclass = MyNumbers
myiter = iter(myclass)

print(next(myclass))





#a = ('Раис', "Anton", 'flada')
#iterator = iter(a)
#for x in a:
#    print(x)