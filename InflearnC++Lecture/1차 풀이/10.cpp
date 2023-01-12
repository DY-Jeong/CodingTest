#include <iostream>

int digit_sum(int x)
{
    int tmp, sum=0;
    while (x>0)
    {
        tmp=x%10;
        sum+=tmp;
        x=x/10;
    }
    
    return sum;
}


int main() //값을 받자마자 비교, 실행함. 더한 숫자의 최대값을 max에 보관.
{
    int n, num, i, sum, max=-2147000000, res;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        sum=digit_sum(num);
        if(sum>max)
        {max = sum;
        res = num;}
        else if (sum==max)
        {
           if(num>res) res=num;
        }
    }
    printf("%d",res);
    return 0;
}


//내가했던거, 40점
// int c=0, i=0, j=0;
//     int n=0, m=0;
//     scanf("%d", &n);
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
        
//     }
//     for(i=0; i<n; i++)
//     {
//         b[i]=digit_sum(a[i]);
//     }
//     for(i=0; i<n;i++)
//     {
//         if(i==0) c=b[i];
//         if(c<b[i]||a[j]<a[i]) c=b[i], j=i;
//     }
//     printf("%d", a[j]);
//     return 0;
