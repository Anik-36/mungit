#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    int *p_sum = (int*)malloc(sizeof(int));
    *p_sum = 0;
    *p = 101;
    for(  int i=1; i<=*p ; i++){
        *p_sum = *p_sum +pow(i,2);
    }
    printf("%d",*p_sum);
    free(p);
    free(p_sum);
    return 0;
}


