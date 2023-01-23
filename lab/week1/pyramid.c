#include <stdio.h>

int main(){
    int length;

    printf("Enter the length of side :");
    scanf("%d",&length);

    for(int i = 1; i <= length; i++ ){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0 ;
}