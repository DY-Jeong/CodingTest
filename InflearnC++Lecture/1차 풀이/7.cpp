#include <iostream>

int main()//char로 받아서 int에 따른 숫자 판별하기
{
   char a[101] = {};
   int val =0, dspcmnt=0,m=0;
   dspcmnt = 32;
   fgets(a, sizeof a, stdin);
    for(int i=0; i<=100; i++)
    {
        if(a[i]<=char('Z')&&a[i]>=char('A'))
        {
            a[i] = a[i]+dspcmnt;
        }
    }
    for(int n=0;n<=100;n++)
    {
        if(char('a')<=a[n]&&a[n]<=char('z'))
        {
            printf("%c",a[n]);
        }
    }
    

   return 0;
}
