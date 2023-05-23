#include <stdio.h>

int main()
{
   int  b , h, *p, *q, area;

   printf("Enter base and height integers number :\n");
   scanf("%d%d",  &b , &h);

   p = &b;
   q = &h;
   area = (0.5) * (*p * *q) ;

   printf("area = %d\n", area);

   return 0;
}
