//1^2 + 2^2 + 3^2+   + 101^2
// 2^3 + 4^3 + 6^3 +   + n^3
// n!
#include<stdio.h>
int main(){
    int n = 101, sum = 0;
    int *p, *p_sum;
    p= &n;
    p_sum = &sum;
    for(  int i=1; i<=*p ; i++){
        *p_sum = *p_sum +pow(i,2);
    }
    printf("%d",*p_sum);
    return 0;
}


