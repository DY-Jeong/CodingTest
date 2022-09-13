#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  char a, b;
  b='a';
  scanf("%c", &a);
  do
  {
    printf("%c ", b++);
  } while (b<=a);
  return 0;

}