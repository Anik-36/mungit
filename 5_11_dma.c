#include<stdio.h>
#include<stdlib.h>
int main(){
    int *digit = (int*)malloc(sizeof(int));
    scanf("%d",digit);
    if( *digit == 1 ) printf("one \n");
    else if( *digit == 2 ) printf("two \n");
    else if( *digit == 3 ) printf("three \n");
    else if( *digit == 4 ) printf("four \n");
    else if( *digit == 5 ) printf("five \n");
    else if( *digit == 6 ) printf("six \n");
    else if( *digit == 7 ) printf("seven \n");
    else if( *digit == 8 ) printf("eight \n");
    else if( *digit == 9 ) printf("nine \n");
    else if( *digit == 0 ) printf("zero \n");
    return 0;
}
