import random as r
print(r.randint(1,10))


from random import randint
print(randint(9, 10999))

from random import *
print(uniform(0,999))
print(choice(['apple', 'bananan', 'monkey']))

import math
print(math.pi)
print(math.e)
print(math.inf)

print(math.gcd(10,8))
print(math.ceil(math.pi))
print(math.floor(math.e))
print(math.sqrt(256))
print(math.fabs(-1.3))

from datetime import *
print(datetime.now())
today = datetime.now() # 현재의 시간 가져오기
year = today.year # 현재의 년도 가져오기
month = today.month # 현재의 월 가져오기
day = today.day # 현재의 날짜 가져오기
hour = today.hour # 현재의 시간 가져오기
minute = today.minute # 현재의 분 가져오기
second = today.second # 현재의 초 가져오기
ms = today.microsecond # 현재의 마이크로세컨드 가져오기

print(f"{year}년 {month}월 {day}일 {hour}시 {minute}분 {second}초 {ms} 밀리초")


import time as t

print(t.time())

import calendar
print(calendar.calendar(2023))

print(calendar.prmonth(2025, 9))

import time as t

input("5초 맞추기 게임 시작! 엔터 키를 눌러 주세요")
start_time = t.time()

input("5초를 맞춰 주세요! 엔터 키를 눌러 주세요")
end_time = t.time()

print(end_time - start_time)