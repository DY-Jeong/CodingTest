#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a, d, n;
  scanf("%d %d %d", &a, &d, &n);
  printf("%d\n",a+d*(n-1));
  
  return 0;
}