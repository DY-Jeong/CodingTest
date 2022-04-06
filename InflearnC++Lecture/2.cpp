#include <iostream>

int main()
{
    int a, b,i, sum=0;
    scanf("%d %d", &a, &b);
    for(i=a; a<=i&&i<=b; i++)
    {
        if(i==b)
        {
            printf("%d ", i);
            sum+=i;
        }
        else
        {
            printf("%d + ", i);
            sum+=i;
        }
        
    }
    printf("= %d", sum);//작은따옴표 안됨
    return 0;
}3 