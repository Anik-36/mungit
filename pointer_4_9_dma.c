#include<stdio.h>
#include<stdlib.h>
int main(){
    int *radius = (int*)malloc(sizeof(int));
    int *area = (int*)malloc(sizeof(int));

    scanf("%d",radius);
    *area = ( 3.1416 ) * (*radius * *radius) ;

    printf("Area    is %d \n",*area);
    free(area);


    return 0;
}
