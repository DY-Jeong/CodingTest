#include <stdio.h>
int main()
{//return으로 함수를 종료시키자!
  int a, d, n, i;
  long long r; //자료형 유의하자!!!
  i=0;
  scanf("%d %d %d", &a, &d, &n);
  r=a;
  do
  {
    r=r*d;
    i++;
  } while (i<(n-1));
  
  printf("%lld\n",r);
  
  return 0;
}