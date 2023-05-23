#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    scanf("%d%d",p_1,p_2);
    if( *p_1<*p_2 ){
        printf("%d is Minimum \n",*p_1);
    }
    else{
        printf("%d is Minimum \n",*p_2);
    }
    return 0;
}
