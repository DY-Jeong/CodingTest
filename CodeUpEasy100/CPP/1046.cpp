#include <stdio.h>

int main()
{//long long int -> lld
   long long int a, b, c, d;
   scanf("%lld %lld %lld", &a, &b, &c);
   d = a+b+c;
   printf("%lld\n%.1f", d, (float)d/3);
}

