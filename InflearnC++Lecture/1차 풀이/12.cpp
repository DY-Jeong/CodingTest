#include <iostream>
#include <math.h>

int main()//1자리는 9개, 2자리는 90개, 3자리는 900개, 4자리는 9000개
{
    int n,tmp, i=1, res=0, d=9;
    long long sum=0;
    scanf("%d", &n);
    while(sum+d<n)
    {
        res = res+i*d;
        sum=sum+d;
        i++;
        d=d*10;
    }
    res=res+((n-sum)*i);
    printf("%lld",res);
    return 0;
}
