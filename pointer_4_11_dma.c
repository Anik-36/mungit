#include <stdio.h>

int main()
{
   int  *f = (int*)malloc(sizeof(int));
   float *c = (float*)malloc(sizeof(float));

   printf("Enter celsius temperature :\n");
   scanf("%d",  f );

   *c = ((*f -32)/9)*5 ;
   printf("fahrenheight = %f\n", *c);
   free(c);

   return 0;
}
