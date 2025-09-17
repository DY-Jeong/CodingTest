def factorial(n):
    if n==1:
        return 1
    return n*factorial(n-1)

print(factorial(5))


def get_double(*nums):
    my_num = list(nums)
    for i in range(len(my_num)):
        my_num[i] *= 2
    return my_num

a, b, c = get_double(1, 2, 3)
print(a, b, c)