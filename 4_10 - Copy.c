#include <stdio.h>

int main()
{
   int  c ,  *p;
   float f ;

   printf("Enter celsius temperature :\n");
   scanf("%d",  &c );

   p = &c;
   f = (9* *p)/5+32 ;
   printf("fahrenheight = %f\n", f);

   return 0;
}
