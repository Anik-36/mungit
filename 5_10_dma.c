#include<stdio.h>
#include<stdlib.h>
int main(){
    int *mark = (int*)malloc(sizeof(int));
    scanf("%d",mark);
    if(*mark>=80 && *mark<=100){
        printf("A+");
    }
    else if(*mark>=70 && *mark<=79){
        printf("A");
    }
    else if(*mark>=65 && *mark<=69){
        printf("A-");
    }
    else if(*mark>=60 && *mark<=64){
        printf("B+");
    }
    else if(*mark>=55 && *mark<=59){
        printf("c");
    }
    else if(*mark>=50 && *mark<=54){
        printf("D");
    }
    else if(*mark>=40 && *mark<=49){
        printf("E");
    }
    else{
        printf("F");
    }
    return 0;
}
