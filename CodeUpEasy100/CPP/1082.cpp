#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a;
  scanf("%x", &a);
  for(int i=1; i<16; i++)
  {
      printf("%X*%X=%X\n", a,i, a*i);
  }
  return 0;
}