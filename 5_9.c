#include<stdio.h>
int main(){
    int year;
    int *p;
    scanf("%d",&year);
    p = &year;
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
