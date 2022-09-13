#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  char a;
  while (true)
  {
    scanf("%c", &a);
    printf("%c", a);
    if(a==113)
    {
      return 0;
    }
  }
  
}