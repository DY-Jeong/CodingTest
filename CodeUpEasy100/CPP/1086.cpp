#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int w, b, h;
  scanf("%d %d %d", &w, &h, &b);
  printf("%.2f MB\n", ((float)w*(float)h*(float)b)/(8*1024*1024));
  return 0;
}