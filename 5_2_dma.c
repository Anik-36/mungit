#include<stdio.h>
#include<stdlib.h>
int main(){
    int *age = (int*)malloc(sizeof(int));
    scanf("%d",age);
    if( *age>= 18 ){
        printf("voter \n");
    }
    else{
        printf("not-voter \n");
    }
    return 0;
}
