year = int(input("Input year to check"))

if year%4 == 0:
    if year%100 == 0:
        if year%400 == 0:
            print("Leaf Year")
        else:
            print("normal year")
    else:
        print("Leaf Year")
else:
    print("normal year")


if (year%4 == 0 and year%100!=0) or year%400 == 0:
    print("Leaf year")
else:
    print("normal year")