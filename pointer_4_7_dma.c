#include<stdio.h>
#include<stdlib.h>
int main(){
    int *base = (int*)malloc(sizeof(int));
    int *height = (int*)malloc(sizeof(int));
    int *area = (int*)malloc(sizeof(int));

    scanf("%d%d",base,height);
    *area = (0.5) * (*base * *height) ;

    printf("Area    is %d \n",*area);
    free(area);


    return 0;
}
