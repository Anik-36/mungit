#include<stdio.h>
#include<stdlib.h>
int main(){
    int *n = (int*)malloc(sizeof(int));
    //scanf("%d",n);
    *n=99;
    for(int i=1; i<=*n; i=i+2){
        printf("%d",i);
        if( i == *n ){
            printf("");
        }
        else
            printf(", ");
    }
    free(n);
    return 0;
}
