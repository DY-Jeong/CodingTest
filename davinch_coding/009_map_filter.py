money= [['5월1일', 500], ['5월2일', 600], ['5월3일', 300], 
         ['5월4일', 1000], ['5월5일', 200]]

def add_money():
    day = input("day")
    m = int(input("amount"))
    money.append([day, m])

def show_money(m_list):
    for row in m_list:
        print(f'{row[0]} : {row[1]}')

def show_menu():
    print("1. input money")
    print("2. show budgetbook")
    print("3. show max output")
    print("4. sorted view")
    print("5. dollarization")
    print("0. exit")

def get_max_money():
    print(max(money, key=lambda m: m[1]))

def sorted_money():
    m_list = sorted(money, key=lambda m: m[1], reverse=True)
    show_money(m_list)

def show_dollar():
    won_to_dollar = 0.00074
    dollar = map(lambda m: [m[0], m[1]*won_to_dollar], money)
    show_money(dollar)

print(*filter(lambda m : m[1]>=500, money))
ans=1
while ans:
    show_menu()
    ans = int(input("what do you want?"))
    if ans == 1:
        add_money()
    elif ans == 2:
        show_money(money)
    elif ans == 3:
        get_max_money()
    elif ans == 4:
        sorted_money()
    elif ans == 5:
        show_dollar()

