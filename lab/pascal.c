#include <stdio.h>

int main(){
    int length,n;
    printf("Enter the Number of levels of triangle ");
    scanf("%d",&length);

    for(int i = 1; i <= 2*length; i+=2){
        n = 0;
        for(int j = 0; j< (2*length - i)/2;j++){
            printf("  ");
        }
        for(int j = 1; j <= i/2; j++){
            printf("%d ",j);
        }
        for(int j = i/2+1; j > 0; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}