#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    int *p_prod = (int*)malloc(sizeof(int));

    scanf("%d%d",p_1,p_2);
    *p_prod = *p_1 * *p_2 ;

    printf("Difference of %d and %d is %d \n",*p_1,*p_2,*p_prod);
    free(p_prod);


    return 0;
}
