#include<stdio.h>
int main(){
    int a, b;
    int *p_1,*p_2;
    scanf("%d%d",&a,&b);
    p_1 = &a;
    p_2 = &b;
    if(*p_1>*p_2){
        printf("%d is maximum . ", *p_1);
    }
    else{
        printf("%d is maximum . ",*p_2);
    }
    return 0;
}
