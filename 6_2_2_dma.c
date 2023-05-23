#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    int *p_sum = (int*)malloc(sizeof(int));
    *p_sum = 0;
    scanf("%d",p);
    for(  int i=1; i<=*p ; i+=2){
        *p_sum = *p_sum +i;
    }
    printf("%d",*p_sum);
    free(p);
    free(p_sum);
    return 0;
}
