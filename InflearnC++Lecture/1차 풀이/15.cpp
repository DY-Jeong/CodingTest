#include <iostream>
#include <math.h>
int main()
{
    int i=2, j=0, k=0, flag, n;
    scanf("%d", &n);
    
    for(i=2; i<=n; i++)
    {
        flag=1;
        for(j=2; i>=j*j; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            
        }
        if(flag==1) k++;
    }
    printf("%d", k);
    return 0;
}
