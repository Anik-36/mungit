#include <stdio.h>
#include<math.h>


int main()
{
   int  r, *p;
   float area ;

   printf("Enter radious  :\n");
   scanf("%d",  &r);

   p = &r;
   area = (3.1416) * (*p * *p) ;

   printf("area = %.3f\n", area);

   return 0;
}
