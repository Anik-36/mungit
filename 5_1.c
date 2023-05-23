#include<stdio.h>
int main(){
    int mark;
    int *p;
    scanf("%d",&mark);
    p = &mark;
    if( *p>=40 && *p<=100 ){
        printf("passed \n");
    }
    else{
        printf("failed \n");
    }
    return 0;
}
