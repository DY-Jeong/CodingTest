#include <iostream>


int main()
{
    int n,tmp, num, i, sum=0, res;
    int a[10]={};
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    { 
        res=i;
        while (res>0)
        {
            tmp=res%10;
            a[tmp]++;
            res=res/10;
        }
    }
    for(i=0;i<10; i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
