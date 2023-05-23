#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int *p_fact= (int*)malloc(sizeof(int));
    int *p= (int*)malloc(sizeof(int));
    *p_fact = 1 ;
    scanf("%d",p);
    for(  int i=1; i<=*p ; i++){
        *p_fact = *p_fact *i;
    }
    printf("%d",*p_fact);
    free(p_fact);
    free(p);
    return 0;
}
