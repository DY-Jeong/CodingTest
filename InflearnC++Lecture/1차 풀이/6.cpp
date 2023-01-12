#include <iostream>

int main()//char로 받아서 int에 따른 숫자 판별하기
{
   char a[51] = {};
   int val =0, cnt=0, i,m=0;
   scanf("%s", &a);
    for(int i=49; i>=0; i--)
    {
        if(char('0')<=a[i]&&a[i]<=char('9'))
        {
            val=val*10 +a[i]-48;
        }
    }
    for(int n=1;n<=val;n++)
    {
        if(val%n==0)
        {
            m++;
        }
    }
    printf("%d\n%d", val, m);

   return 0;
}


//내가했던거
//  char a[51] = {};
//     int b[51]={};
//     int val =0;
//     int j=0;
//     int m=0;
//     scanf("%s", &a);
//     for(int i=49; i>=0; i--)
//     {
//         if(char('0')<=a[i]&&a[i]<=char('9'))
//         {
//             b[j]=a[i]-48;
//             j++;
//         }
//     }
//     for(int k=j-1; k>=0; k--)
//     {
//         for(int l=k+1; l>1;l--)
//         {
//             b[k]=b[k]*10;
//         }
//         val += b[k];
//     }
//     
//     return 0;