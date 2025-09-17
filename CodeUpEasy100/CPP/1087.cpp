#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a, sum, b;
  sum=0;
  scanf("%d", &a);
  for(int i=0; a>i; i++)
  {
    sum +=i;
  }
  printf("%d\n",sum);
  
  return 0;
}