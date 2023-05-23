#include<stdio.h>
int main(){
    int a, b, diff;
    int *p1 , *p2, *p_diff;

    scanf("%d%d", &a,&b);

    p1 = &a;
    p2 = &b;
    p_diff = &diff;
    *p_diff = *p1 - *p2;

    printf("The differece between %d and %d = %d\n", *p1,*p2,*p_diff);

    return 0;
}
