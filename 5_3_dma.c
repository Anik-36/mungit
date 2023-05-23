#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    scanf("%d",p);
    if( *p%2==0 ){
        printf("even \n");
    }
    else{
        printf("odd \n");
    }
    return 0;
}
