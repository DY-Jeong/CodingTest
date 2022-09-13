#include <stdio.h>

int main()
{//~는 tild, bitwise 연산자. ~0=1, ~1=0dla ~(bitwise not), &(bitwise and), |(bitwise or), ^(bitwise xor),
//<<(bitwise left shift), >>(bitwise right shift)
   int a, b;
   scanf("%d %d", &a, &b);
   printf("%d", a&b);
}

