scores={'국어' : 80, '영어' : 90, '수학' : 85, '과학' : 95}

a = {}
print("a =", a, ", a type =", type(a)) 
# a = {} , a type = <class 'dict'>

b = dict()
print("b =", b, ", b type =", type(b)) 
# b = {} , b type = <class 'dict'>

scores = dict(국어=80, 영어=47, 수학=63, 과학=98)
print(scores)

print(scores['영어'])
print(scores.get('수학'))
print(scores.get('체육', 0)) # None

def print_scores():
    subject = input("과목명을 입력하세요: ")
    if subject not in scores.keys(): 
        print(f'{subject}과목이 없습니다.')
    else:
        print(f'{subject} 점수는 {scores[subject]}점 입니다.')
def print_avg():
    print(f'평균은 {cal_sum()/len(scores)}점 입니다.')
    
def cal_sum():
    sum = 0
    for score in scores.values():
        sum += score    
    return sum
def print_sum():
    print(f'총점은 {cal_sum()}점 입니다.')
def print_all():
    for k, v in scores.items():
        print(f'{k} : {v}점')
        
        
def print_menu():
    print("레오의 성적 관리 프로그램")
    print("무엇을 할까요?")
    print("1. 과목별 점수 보기")
    print("2. 전체 점수 보기")
    print("3. 점수 추가")
    print("4. 점수 수정")
    print("5. 점수 삭제")
    print("6. 총점 보기")
    print("7. 평균 보기")
    print("0. 프로그램 종료")
    
while True:
    print_menu()
    num = int(input())
    if num == 1: # 1. 과목별 점수 보기
        print_scores()
        pass   
    elif num == 2:
        print_all()
    elif num == 3:
        subject = input("과목명을 입력하세요")
        if subject in scores.keys():
            print(f'{subject}과목이 이미 있습니다.')        
        else:
            score = int(input("점수를 입력하세요"))
            scores[subject] = score
            print(f'{subject}과목이 추가되었습니다.')
    elif num == 4:
        subject = input("과목명을 입력하세요")
        if subject not in scores.keys():
            print(f'{subject}과목이 없습니다.')
        else:
            score = int(input("점수를 입력하세요"))
            scores[subject] = score
            print(f'{subject}과목이 수정되었습니다.')
    elif num == 5:
        subject = input("과목명을 입력하세요")
        if subject not in scores.keys():
            print(f'{subject}과목이 없습니다.')
        else:
            del scores[subject]
            print(f'{subject}과목이 삭제되었습니다.')
    elif num == 6:
        print_sum()
    elif num == 7:
        print_avg()
    elif num == 0:
        print("프로그램을 종료합니다.")
        break