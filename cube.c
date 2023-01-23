#include <stdio.h>

void cube(int n);

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    cube(num);
}

void cube(int n){
    printf("The cube of %d is : %d \n",n, n*n*n);
}