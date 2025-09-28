#include <stdio.h>

int main()
{
   int a;

   scanf("%d", &a);

   if(a % 2 == 1)
   {
      printf("ODD\n");
   }
   else
   {
      printf("EVEN\n");
   }

   return 0;
}