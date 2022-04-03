#include <stdio.h>
int main()
{//배열을 쓸 수 있다했음. 배열까지 안필요할듯
  int n, t1, t2;
  scanf("%d", &n);
  for(int i=0; i<n; i++)
  {
    scanf("%d", &t1);
    if(i==0)
    {
      t2 = t1;
    }
    if(t2<t1)
    {
      t1 = t2;
    }
    else
    {
      t2=t1;
    }
  }
  printf("%d", t1);
  return 0;
}