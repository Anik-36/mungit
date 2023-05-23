#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    int *p_quotient = (int*)malloc(sizeof(int));

    scanf("%d%d",p_1,p_2);
    *p_quotient = *p_1 / *p_2 ;

    printf("Quotient of %d and %d is %d \n",*p_1,*p_2,*p_quotient);
    free(p_quotient);


    return 0;
}
