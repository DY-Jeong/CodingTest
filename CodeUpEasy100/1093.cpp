#include <stdio.h>
int main()
{//return으로 함수를 종료시키자!
  int n, t;
  int a[24]={};
  scanf("%d", &n);
  for(int i=1;i<=n;i++)
  {
    scanf("%d", &t);
    a[t] = a[t]+1;
  }
  for(int i=1; i<=23;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}