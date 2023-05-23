#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    int *p_3 = (int*)malloc(sizeof(int));
    int *p_average = (int*)malloc(sizeof(int));

    scanf("%d%d%d",p_1,p_2,p_3);
    *p_average = (*p_1 + *p_2 + *p_3)/3;

    printf("Average   is %d \n",*p_average);
    free(p_average);


    return 0;
}
