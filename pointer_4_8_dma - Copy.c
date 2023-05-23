#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    int *p_3 = (int*)malloc(sizeof(int));
    int *p_s = (int*)malloc(sizeof(int));
    int *p_area = (int*)malloc(sizeof(int));

    scanf("%d%d%d",p_1,p_2,p_3);
    *p_s = (*p_1 + *p_2 + *p_3)/2;
    *p_area =  sqrt(*p_s*(*p_s-*p_1)*(*p_s-*p_2)*(*p_s-*p_3));

    printf("Area    is %d \n",*p_area);
    free(p_area);


    return 0;
}
