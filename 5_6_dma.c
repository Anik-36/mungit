#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    scanf("%d",p);
    if( *p>0 ){
        printf("positive \n");
    }
    else if( *p<0 ){
        printf("negative \n");
    }
    else{

        printf("zero \n");
    }

    return 0;
}
