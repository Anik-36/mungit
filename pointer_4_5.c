#include<stdio.h>
int main(){
    int a, b, reminder;
    int *p1 , *p2, *p_rem;

    scanf("%d%d", &a,&b);

    p1 = &a;
    p2 = &b;
    p_rem = &reminder;
    *p_rem = *p1 % *p2;

    printf("The reminder of %d and %d = %d\n", *p1,*p2,*p_rem);

    return 0;
}
