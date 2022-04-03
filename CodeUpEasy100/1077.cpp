#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a, b;
  b=0;
  scanf("%d", &a);
  do
  {
    printf("%d\n", b++);
  } while (b<=a);
  return 0;

}