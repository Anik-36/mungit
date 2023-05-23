#include<stdio.h>
int main(){
    int n=99;
    int *p;
    p=&n;
    for(int i=1; i<=*p; i=i+2){
        printf("%d",i);
        if( i == *p ){
            printf("");
        }
        else
            printf(", ");
    }

    return 0;
}
