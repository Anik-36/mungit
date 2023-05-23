#include<stdio.h>
int main(){
    int a, b, c;
    int *p_1,*p_2,*p_3;
    scanf("%d%d%d",&a,&b,&c);
    p_1 = &a;
    p_2 = &b;
    p_3 = &c;
    if( *p_1 > *p_2 ){
            if( *p_1 > *p_3 ){
                printf("%d is maximum . ", *p_1 );
            }
            else{
                printf("%d is maximum . ", *p_3 );
            }
    }
    else if(*p_2>*p_1){
            if(*p_2>*p_3){
                printf("%d is maximum . ", *p_2);
            }
            else{
                printf("%d is maximum . ", *p_3);
            }
    }
    else{
        printf("%d is maximum . ",*p_1);
    }
    return 0;
}
