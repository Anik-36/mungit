#include<stdio.h>
int main(){
    int n;
    int *p;
    scanf("%d",&n);
    p=&n;
    for(int i=1; i<=*p; i++){
        printf("%d",i);
        if( i == *p ){
            printf("");
        }
        else
            printf(", ");
    }

    return 0;
}
