#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a, b;
  scanf("%d %d", &a, &b);
  for(int i=1; i<=a; i++)
  {
    for(int j=1;j<=b;j++)
    {
      printf("%d %d\n", i, j);
    }
  }
  return 0;
}