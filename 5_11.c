#include<stdio.h>
int main(){
    int digit;
    int *p ;
    scanf("%d",&digit);
    p= &digit;
    if( *p == 1 ) printf("one \n");
    else if( *p == 2 ) printf("two \n");
    else if( *p == 3 ) printf("three \n");
    else if( *p == 4 ) printf("four \n");
    else if( *p == 5 ) printf("five \n");
    else if( *p == 6 ) printf("six \n");
    else if( *p == 7 ) printf("seven \n");
    else if( *p == 8 ) printf("eight \n");
    else if( *p == 9 ) printf("nine \n");
    else if( *p == 0 ) printf("zero \n");
    return 0;
}
