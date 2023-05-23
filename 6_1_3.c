#include<stdio.h>
int main(){
    int n;
    int *p;
    scanf("%d",&n);
    p=&n;
    for(int i=2; i<=*p; i=i+2){
        printf("%d",i);
        if( i < *p ){
            printf(", ");
        }
    }

    return 0;
}

