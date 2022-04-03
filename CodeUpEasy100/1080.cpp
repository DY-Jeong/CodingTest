#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a, b, sum;
  b, sum=0;
  scanf("%d", &a);
  while (true)
  {
    if(a<sum)
    {
      printf("%d\n",--b);
      break;
    }
    else
    {
      sum = sum+(++b);
    }
  }
  return 0;
}