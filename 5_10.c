#include<stdio.h>
int main(){
    int mark;
    int *p;
    scanf("%d",&mark);
    p = &mark;
    if(*p>=80 && *p<=100){
        printf("A+");
    }
    else if(*p>=70 && *p<=79){
        printf("A");
    }
    else if(*p>=65 && *p<=69){
        printf("A-");
    }
    else if(*p>=60 && *p<=64){
        printf("B+");
    }
    else if(*p>=55 && *p<=59){
        printf("c");
    }
    else if(*p>=50 && *p<=54){
        printf("D");
    }
    else if(*p>=40 && *p<=49){
        printf("E");
    }
    else{
        printf("F");
    }
    return 0;
}
