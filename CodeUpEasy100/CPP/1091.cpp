#include <stdio.h>
int main()
{//return으로 함수를 종료시키자!
  int a, m, d, n, i;
  long long r; //자료형 유의하자!!!
  i=1;
  scanf("%d %d %d %d", &a, &m, &d, &n);
  r=a;
  while (i<n)
  {
    r=(r*m+d);
    i++;
  }
  
  printf("%lld\n",r);
  
  return 0;
}