#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    scanf("%d",p);
    if( *p%400==0 ){
        printf("leap year \n");
    }
    else if( *p%4==0 ){
        printf("leap year \n");
    }
    else if( *p%100==0 ){
        printf("not leap year \n");
    }
    else{
        printf("not leap year \n");
    }
    return 0;
}
