#include<stdio.h>
#include<math.h>
int main()
{
   int a, b , c, s ;
   int *p, *q,*r;
   float area ;

   printf("Enter three integers number :\n");
   scanf("%d%d%d", &a, &b , &c);

   p = &a;
   q = &b;
   r = &c;
   s = (*p + *q + *r )/2 ;
   area =  sqrt(s*(s-*p)*(s-*q)*(s-*r));

   printf("area = %.3f \n", area);

   return 0;
}
