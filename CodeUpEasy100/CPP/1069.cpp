#include <stdio.h>

int main()
{
   char a;
   scanf("%c", &a);
   switch (a)
   {
   case 'A':
      printf("%s", "best!!!");
      /* code */
      break;
   case 'B':
      printf("%s", "good!!");
      /* code */
      break;
   case 'C':
      printf("%s", "run!");
      /* code */
      break;
   case 'D':
      printf("%s", "slowly~");
      /* code */
      break;

   default:
      printf("%s", "what?");
      break;
   }

}

