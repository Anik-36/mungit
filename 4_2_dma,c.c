#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b;
    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    int *p_diff = (int*)malloc(sizeof(int));
    printf("Enter two integers number :\n");

    scanf("%d%d",p_1,p_2);
    *p_diff = *p_1 - *p_2 ;

    printf("Difference of %d and %d is %d \n",*p_1,*p_2,*p_diff);
    free(p_diff);


    return 0;
}
