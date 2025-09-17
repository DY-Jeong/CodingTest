import random

print(random.random())

num = random.randint(1,9)
print(num)


score = 0

for _ in range(5):
    a = random.randint(1,9)
    b = random.randint(2,9)
    result = int(input(f'{a}*{b} = ?'))
    if result == a*b:
        score += 20
        print("Correct!")
    else:
        print("Wrong!")
print("Your score is ", score)