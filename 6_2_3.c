#include<stdio.h>
int main(){
    int n, sum = 0;
    int *p, *p_sum;
    scanf("%d",&n);
    p= &n;
    p_sum = &sum;
    for(  int i=2; i<=*p ; i+=2){
        *p_sum = *p_sum +i;
    }
    printf("%d",*p_sum);
    return 0;
}


