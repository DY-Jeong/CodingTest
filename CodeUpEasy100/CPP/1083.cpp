#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int a;
  scanf("%d", &a);
  for(int i=1; i<=a; i++)
  {
    if(i%3==0)
    {
      printf("%c ",'X');
    }
    else{printf("%d ", i);}
     
  }
  return 0;
}