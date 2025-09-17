#include <stdio.h>//다음에 시간나면 다시풀어봐 
int main()
{
  int a[10][10] = {};
  int k, l;
  for(int i=0; i<10; i++)
  {
    for(int j=0; j<10; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  k=1;
  l=1; //->개미집 2,2
  //오른쪽으로 가
  while (true)
  {
    if(a[k][l]==0)
    {
      a[k][l]=9;
    }
    if(a[k][l]==2)
    {
      a[k][l]=9;
      goto end;
    }
    if(a[k][l+1]==0||a[k][l+1]==2)
    {
      do
      {
        if(a[k][l+1]==2)
        {
          a[k][l+1]=9;
          goto end;
        }
        l++;
        a[k][l]=9;
        
      }
      while (a[k][l+1]==0);
    }

    if(a[k+1][l]==0||a[k+1][l]==2)
    {
      do
      {
        if(a[k+1][l]==2&&a[k][l+1]==1)
        {
          a[k+1][l]=9;
          goto end;
        }
        k++;
        a[k][l]=9;
      } 
      while (a[k+1][l]==0&&a[k][l+1]!=0);
    }
   
    if(a[k][l+1]==1&&a[k+1][l]==1)
    {
      a[k][l]=9;
      goto end;
    }
  }
end:
  for(int i=0; i<=9; i++)
  {
    for(int j=0;j<=9; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}