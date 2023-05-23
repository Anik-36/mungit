#include<stdio.h>
int main(){
    int n, a=1 , b=1 , c ;
    int *p, *p1, *p2 , *p3;
    scanf("%d",&n);
    p=&n;
    p1=&a;
    p2=&b;
    p3=&c;
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
    return 0;
}
