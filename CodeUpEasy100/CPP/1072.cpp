#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
   int a, b;
   scanf("%d", &a);
   a--;
   reload:
   scanf("%d", &b);
   printf("%d\n", b);
   if(a--!=0)
   {
     goto reload;
   }
   return 0;
}