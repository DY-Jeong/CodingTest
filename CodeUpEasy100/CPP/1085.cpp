#include <stdio.h>

int main()
{//return으로 함수를 종료시키자!
  int h, b, c, s;
  scanf("%d %d %d %d", &h, &b, &c, &s);
  printf("%.1f MB\n", ((float)h*(float)b*(float)c*(float)s)/(8*1024*1024));
  return 0;
}