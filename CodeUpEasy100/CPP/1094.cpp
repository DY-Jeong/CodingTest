#include <stdio.h>
int main()
{//return으로 함수를 종료시키자!
  int n, t;
  int a[10000]={};
  scanf("%d", &n);
  for(int i=1;i<=n;i++)
  {
    scanf("%d", &a[i]); //Scanf 쓸 때 값 받을 인수에 참조형(&) 꼭 쓰기!!
  }
  for(int i=n; i>=1;i--)
  {
    printf("%d ",a[i]);
  }
  return 0;
}