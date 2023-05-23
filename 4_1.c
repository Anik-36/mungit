#include <stdio.h>
int main()
{
   int a, b, *p, *q, sum;

   printf("Enter two integers number :\n");
   scanf("%d%d", &a, &b);

   p = &a;
   q = &b;

   sum = *p + *q;

   printf("Sum = %d\n", sum);

   return 0;
}
