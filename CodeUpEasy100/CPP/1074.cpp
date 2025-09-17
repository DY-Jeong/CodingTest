#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a;
  scanf("%d", &a);
  while (true)
  {
    a--;
    if(a==0){return 0;}
    printf("%d\n", a);
  }
}