//1^2 + 2^2 + 3^2+   + 101^2
// 2^3 + 4^3 + 6^3 +   + n^3
// n!
#include<stdio.h>
#include<math.h>
int main(){
    int n , factorial = 1;
    int *p, *p_fact;
    scanf("%d",&n);
    p= &n;
    p_fact = &factorial;
    for(  int i=1; i<=*p ; i++){
        *p_fact = *p_fact *i;
    }
    printf("%d",*p_fact);
    return 0;
}

