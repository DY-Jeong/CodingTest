#include <iostream>
#include <math.h>

int main() //int 자료형의 범위는 2,147,483,647이고 long long 해도 18자리가 끝임.
//본 문제는 char를 사용하라는 문제같음
{
    int tmp, i=1, res=0,sum;
    char a[101]={};
    long long int n;
    scanf("%d", &n);
    while(n>0)
    {
        a[n%10]++;
        n=n/10;
    }
    for(i=0; i<10; i++)
    {
        if(i==0) tmp=a[i];
        if(tmp<=a[i])
        {
        tmp=a[i];
        n=i;
        }
    }
    printf("%d",n);
    return 0;
}
