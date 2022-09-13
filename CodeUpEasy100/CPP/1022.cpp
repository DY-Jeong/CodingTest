#include <stdio.h>

int main()
{//%s strin, %d decimal, %c char, %f float
   char data[2001]="";
   fgets(data, 2000, stdin);
   printf("%s", data);
   return 0;

}
