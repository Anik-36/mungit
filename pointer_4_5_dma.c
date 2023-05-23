#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    int *p_reminder = (int*)malloc(sizeof(int));

    scanf("%d%d",p_1,p_2);
    *p_reminder = *p_1 % *p_2 ;

    printf("reminder of %d and %d is %d \n",*p_1,*p_2,*p_reminder);
    free(p_reminder);

    return 0;
}
