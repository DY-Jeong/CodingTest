#include <stdio.h>
int main()
{//return으로 함수를 종료시키자!
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int i=1;
  while(i%a!=0||i%b!=0||i%c!=0){i++;}
  printf("%lld\n",i);
  
  return 0;
}