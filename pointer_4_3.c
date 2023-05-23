#include<stdio.h>
int main(){
    int a, b, product;
    int *p1 , *p2, *p_pro;

    scanf("%d%d", &a,&b);

    p1 = &a;
    p2 = &b;
    p_pro = &product;
    *p_pro = *p1 * *p2;

    printf("The differece between %d and %d = %d\n", *p1,*p2,*p_pro);

    return 0;
}
