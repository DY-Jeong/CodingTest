#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a;
  scanf("%d", &a);
  for(int i=0; a>=i; i++)
  {
    if((i%3)==0)
    {
      continue;
    }
    printf("%d\n",i);
  }
  return 0;
}