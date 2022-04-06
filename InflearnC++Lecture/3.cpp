#include <iostream>

int main()
{
    int a,i, sum=0;
    scanf("%d", &a);
    for(i=1; i<a; i++)
    {
        if(a%i==0)
        {
            if(a/i==2)
            {
                printf("%d = ", i);
                sum +=i;
            }
            else
            {
                printf("%d + ", i);
                sum +=i;
            }
        }
    }
    printf("%d", sum);
    return 0;

    
}