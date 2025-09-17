from random import *
a = True
answer = randint(100, 999)
a_digit1 = answer//100
a_digit2 = (answer-a_digit1*100)//10
a_digit3 = (answer-a_digit1*100-a_digit2*10)
a = [a_digit1, a_digit2, a_digit3]
st = ball = 0
while(a):
    b = int(input("input 3 digit number"))
    b_digit1 = b//100
    b_digit2 = (b-b_digit1*100)//10
    b_digit3 = b-b_digit1*100-b_digit2*10
    b = [b_digit1, b_digit2, b_digit3]
    dif_digit1 = a_digit1-b_digit1
    dif_digit2 = a_digit2-b_digit2
    dif_digit3 = a_digit3-b_digit3

    for _ in range(0, 3):
        for __ in range(0, 3):
            dif = a[_]-b[__]
            if _ == __ and dif == 0:
                st+=1
            elif _!=__ and dif == 0:
                ball+=1
    if st == ball == 0:
        print("Out")
    elif st == 3:
        a = False
        print(answer, "Correct")
    else:
        print(f'{st}strike and {ball} ball')
        st = 0
        ball = 0

    
    



