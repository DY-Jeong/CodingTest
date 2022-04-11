#include <iostream>
int main() //int 자료형의 범위는 2,147,483,647이고 long long 해도 18자리가 끝임.
//본 문제는 char를 사용하라는 문제같음
{
    int tmp, i, res=0,sum;
    char a[101]={};
    int b[10]={};
    int n;
    scanf("%s", &a[i]);
    for(i=0; i<100; i++)
    {
        b[a[i]-48]++;
    }
    for(i=0; i<10; i++)
    {
        if(i==0) tmp=b[i];
        if(tmp<=b[i])
        {
        tmp=b[i];
        n=i;
        }
    }
    printf("%d",n);
    return 0;
}
