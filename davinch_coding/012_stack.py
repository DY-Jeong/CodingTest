from collections import deque

dq = deque()

dq.append(1)
dq.appendleft(2)

print(dq)  # deque([2, 1])

#print(dq.pop())

print(dq.popleft())
print(dq.popleft())

def print_menu():
    print("1. 대기 번호 등록")
    print("2. 나의 대기 번호 보기")
    print("3. 전체 대기 명단 보기")
    print("4. 대기 번호 호출")
    print("5. 프로그램 종료")

def insert_list():
    number = input("대기할 전화번호를 입력하세요")
    wating_list.append(number)
    print(f"현재 대기 인원은 {len(wating_list)}명 입니다.")
    
def show_my_list():
    number = input("대기 순번을 확인할 번호를 입력하세요")
    if number in wating_list:
        cnt = wating_list.index(number)
        print(f"{cnt+1}번째 대기중입니다.")
    else :
        print("대기번호가 존재하지 않습니다.")

def show_all_list():
    if wating_list:
        print(*wating_list, sep="\n")
    else :
        print("대기 명단이 비어있습니다.")
def call_list():
    if wating_list:
        print(f"{wating_list.pop(0)}님, 대기번호가 호출되었습니다.")
        print(f"현재 대기 인원은 {len(wating_list)}명 입니다.")
    else :
        print("대기 명단이 비어있습니다.")
        
wating_list = []
cmd = 1
while cmd != 5:
    print_menu()
    cmd = int(input("명령을 선택하세요: "))
    if cmd == 1:
        insert_list()
    elif cmd == 2:
        show_my_list()
    elif cmd == 3:
        show_all_list()
    elif cmd == 4:
        call_list()
    elif cmd == 5:
        break


    