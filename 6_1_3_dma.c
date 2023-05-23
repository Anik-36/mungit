#include<stdio.h>
#include<stdlib.h>
int main(){
    int *n = (int*)malloc(sizeof(int));
    scanf("%d",n);
    for(int i=2; i<=*n; i=i+2){
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
