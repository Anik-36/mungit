#include <stdio.h>

int main()
{
   int  f ,  *p;
   float c ;

   printf("Enter celsius temperature :\n");
   scanf("%d",  &f );

   p = &f;
   c = ((*p -32)/9)*5 ;
   printf("celsius = %f\n", c);

   return 0;
}
