#include<stdio.h>
int main(){
    int a, b, quotient;
    int *p1 , *p2, *p_quo;

    scanf("%d%d", &a,&b);

    p1 = &a;
    p2 = &b;
    p_quo = &quotient;
    *p_quo = *p1 / *p2;

    printf("The differece between %d and %d = %d\n", *p1,*p2,*p_quo);

    return 0;
}
