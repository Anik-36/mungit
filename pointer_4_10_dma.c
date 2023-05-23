#include <stdio.h>

int main()
{
   int  *c = (int*)malloc(sizeof(int));
   float *f = (float*)malloc(sizeof(float));

   printf("Enter celsius temperature :\n");
   scanf("%d",  c );

   *f = (9* *c)/5+32 ;
   printf("fahrenheight = %f\n", *f);
   free(f);

   return 0;
}
