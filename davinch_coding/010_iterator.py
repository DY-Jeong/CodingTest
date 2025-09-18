import turtle as t
from itertools import count

screen = t.Screen()
screen.setup(600, 600)
screen.title("번호표 뽑기 프로그램")
t.ht()
t.speed(0)
t.tracer(0)

def set_pen(x, y, color):
    t.up()
    t.goto(x,y)
    t.down()
    t.color(color)

def draw_text(x, y, color, msg):
    set_pen(x, y, color)
    t.write(msg, False, "center", ("", 60))

draw_text(0, 200, "blue", "버튼을 누르세요")

def draw_rect():
    set_pen(-100, 100, 'gray')
    t.begin_fill()
    for _ in range(4):
        t.fd(200)
        t.rt(90)
    t.end_fill()
draw_rect()    

a = [1,2,3,4,5]
print(type(a))
it = iter(a)
print(type(it))

print(f"{next(it) =}")
print(f"{next(it) =}")
for ni in it:
    print(f'{ni=}')
from itertools import *

cnt = count(-2, 3)
print(next(cnt)) # -2
print(next(cnt)) # 1
print(next(cnt)) # 1

num=count(1)
def click_mouse(x, y):
    if -100 <=x <=100 and -100<=y<=100:
        draw_rect()
        draw_text(0, -30, "red", next(num))
        screen.update()

screen.onclick(click_mouse)
screen.mainloop()

