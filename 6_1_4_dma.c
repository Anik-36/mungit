#include<stdio.h>
#include<stdlib.h>
int main(){

    int *p = (int*)malloc(sizeof(int));
    int *p1 = (int*)malloc(sizeof(int));
    int *p2 = (int*)malloc(sizeof(int));
    int *p3 = (int*)malloc(sizeof(int));

    scanf("%d",p);
    *p1= 1;
    *p2= 1;
    printf("%d, %d, ", *p1, *p2);
    *p3 = *p1 +  *p2;
    for(int i=3; i<=*p; i++ ){
        printf("%d",*p3);
        if( i == *p ){
            printf("");
        }
        else
            printf(", ");
        *p1 = *p2;
        *p2 = *p3;
        *p3 = *p1 +  *p2;
    }
    free(p);
    free(p1);
    free(p2);
    free(p3);
    return 0;
}
