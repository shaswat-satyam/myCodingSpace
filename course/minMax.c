#include <stdio.h>

void minMax(int a, int b){
    if(a>b){
        printf("%d is greater than %d \n", a, b);
    }
    else{
        printf("%d is greater than %d \n/", b, a );
    }
}

int main(){
    int first, second;
    printf("Enter the first and second number :");
    scanf("%d %d",&first,&second);
    minMax(first, second);
    return 0;

}