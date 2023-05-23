#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    scanf("%d",p);
    if( *p>= 40 && *p<= 100 ){
        printf("passed \n");
    }
    else{
        printf("failed \n");
    }
    return 0;
}
