#include<stdio.h>
#include<stdlib.h>
int main(){
    int *n = (int*)malloc(sizeof(int));
    scanf("%d",n);
    for(int i=1; i<=*n; i++){
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
