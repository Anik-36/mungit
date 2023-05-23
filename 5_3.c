#include<stdio.h>
int main(){
    int number;
    int *p;
    scanf("%d",&number);
    p = &number;
    if( *p%2==0 ){
        printf("even \n");
    }
    else{
        printf("odd\n");
    }
    return 0;
}
