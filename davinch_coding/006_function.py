def my_func(*ar):
    print(type(ar))

my_func(1, 2, 3, 4, 5)


def my_func2(**kwargs):
    print(type(kwargs))

my_func2(a=1, b=2, c=3)

def quiz(**qst):
    for key, value in qst.items():
        rst = input(f'what\'s mean of {key}?')
        if rst == value:
            print("Correct")
        else:
            print("Wrong")
#quiz(apple='사과', banana='바나나', peach='복숭아')

a = my_func
a(1, 2, 3, 4, 5)