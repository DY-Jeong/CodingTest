#include <stdio.h>

int main()
{//~는 tild, bitwise 연산자. ~0=1, ~1=0dla ~(bitwise not), &(bitwise and), |(bitwise or), ^(bitwise xor),
//<<(bitwise left shift), >>(bitwise right shift)
//3항연산자 ? -> 조건문 ? 참:거짓
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   printf("%d", (a<b ? a:b)>c ? c : (a<b ? a:b));
}

