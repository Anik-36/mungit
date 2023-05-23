#include<stdio.h>
int main(){
    int age;
    int *p;
    scanf("%d",&age);
    p = &age;
    if( *p>= 18 ){
        printf("voter \n");
    }
    else{
        printf("not-voter \n");
    }
    return 0;
}
