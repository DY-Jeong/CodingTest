#include <stdio.h>

int main()
{//long long int -> lld
   long long int a, b;
   scanf("%lld %lld", &a, &b);
   printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f\n", a+b, a-b, a*b, a/b, a%b, (float)a/(float)b);
}

