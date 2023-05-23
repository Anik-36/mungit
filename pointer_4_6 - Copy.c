#include<stdio.h>
int main(){

    int a, b, c;
    float avg, *p_avg;
    int *p1, *p2, *p3 ;

    scanf("%d%d%d",&a,&b,&c);

    p1 = &a;
    p2 = &b;
    p3 = &c;
    p_avg = &avg;

    *p_avg = (*p1 + *p2 + *p3)/3;

    printf("the average is %f", *p_avg);


    return 0;
}
