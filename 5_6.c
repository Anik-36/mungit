#include<stdio.h>
int main(){
    int number;
    int *p;
    scanf("%d",&number);
    p= &number;
    if( *p>0 ){
        printf("positive .\n");
    }
    else if( *p<0 ){
        printf("negative .\n");
    }
    else{
        printf("zero .\n");
    }
    return 0;
}
