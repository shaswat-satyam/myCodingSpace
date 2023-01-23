#include <stdio.h>

int sum(int n){
    if(n > 0){
        return  n + sum(n-1);
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    printf("Enter the till which you want the Sum :");
    scanf("%d",&num);
    printf("Sum is %d \n",sum(num));
    return 0;
}