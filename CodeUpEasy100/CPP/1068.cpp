#include <stdio.h>

int main()
{
   char a;
   scanf("%c", &a);
   if(a>=90)
   {
      printf("%s", "A");
   }
   else if(a>=70)
   {
      printf("%s", "B");
   }
   else if(a>=40)
   {
      printf("%s", "C");
   }
   else
   {
      printf("%s", "D");
   }

}

