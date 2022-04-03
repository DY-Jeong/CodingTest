#include <stdio.h>
int main()//배열의 W, H값 위치 정확히 하기!!!!
{
  int h, w, n, l, d, x, y;
  scanf("%d %d", &w, &h);
  int a[100][100]={};//C++은 컴파일 시 가변배열 선언이 불가
  scanf("%d", &n);

  for(int i=0; i<n; i++)
  {
    scanf("%d %d %d %d", &l, &d, &x, &y);
    if(d==0)
    {
      for(int j=0;j<l; j++)
      {
        a[x][y+j]=1;
      }
    }
    else
    {
      for(int j=0;j<l; j++)
      {
        a[x+j][y]=1;
      }
    }
  }
  for(int i=1; i<=w; i++)
  {
    for(int j=1;j<=h; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}