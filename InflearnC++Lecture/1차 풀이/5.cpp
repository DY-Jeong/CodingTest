#include <iostream>

int main()//강의에서는 String을 Char[]로 받았음. 
{
    int f1, f2, f3, f4, f5, f6,s1, s2, s3, s4, s5, s6, s7;
    int a, b, c, d;
    scanf("%1d%1d%1d%1d%1d%1d-%1d%1d%1d%1d%1d%1d%1d", &f1,&f2,&f3,&f4,&f5,&f6,&s1,&s2,&s3,&s4,&s5,&s6,&s7);
    a = f1*10+f2;
    b = 19;
    switch (s1)
    {
    case 1:
        c=100-a+b+1;
        printf("%d M", c);
        break;
    case 2:
        c=100-a+b+1;
        printf("%d W", c);
        break;
    case 3:
        c=-a+b+1;
        printf("%d M", c);
        break;
    case 4:
        c=-a+b+1;
        printf("%d W", c);
        break;
    
    default:
        break;
    }

    return 0;
    
}