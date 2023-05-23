#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    int *p_3 = (int*)malloc(sizeof(int));
    scanf("%d%d%d",p_1,p_2,p_3);
    if( *p_1 < *p_2 ){
            if( *p_1 < *p_3 ){
                printf("%d is minimum . ", *p_1 );
            }
            else{
                printf("%d is minimum . ", *p_3 );
            }
    }
    else if(*p_2<*p_1){
            if(*p_2<*p_3){
                printf("%d is minimum . ", *p_2);
            }
            else{
                printf("%d is minimum . ", *p_3);
            }
    }
    else{
        printf("%d is minimum . ",*p_1);
    }
    free(p_1);
    free(p_2);
    free(p_3);
    return 0;
}
