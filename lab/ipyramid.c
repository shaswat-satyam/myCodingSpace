#include <stdio.h>

int main(){
    int length;

    printf("Enter the length of side :");
    scanf("%d",&length);

    for(int i = 0; i < length; i++ ){
        for(int j = 0; j < i; j++){
            printf("  ");
        }
        for(int j = length; j > i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0 ;
}