//1^2 + 2^2 + 3^2+   + 101^2
// 2^3 + 4^3 + 6^3 +   + n^3
// n!
#include<stdio.h>
#include<math.h>
int main(){
    int n , sum = 0;
    int *p, *p_sum;
    scanf("%d",&n);
    p= &n;
    p_sum = &sum;
    for(  int i=2; i<=*p ; i+=2){
        *p_sum = *p_sum +pow(i,3);
    }
    printf("%d",*p_sum);
    return 0;
}
