#include <stdio.h>
int main()
{//배열을 쓸 수 있다했음. 배열까지 안필요할듯
  int n, x, y;
  int a[20][20] = {};
  scanf("%d", &n);
  for(int i=0; i<n; i++)
  {
    scanf("%d %d", &x, &y);
    a[x][y] = 1;
  }
  for(int i=1; i<20; i++)
  {
    for(int j=1;j<20; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}