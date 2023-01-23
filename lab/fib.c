#include <stdio.h>

int fib(int num);

int main(){
    int n;
    printf("Enter the length of fibonaaci sequence : ");
    scanf("%d",&n);
    for(int i =1; i < n+1;i++){
        printf("%d \n",fib(i));
    }
    return 0;
}

int fib(int num){
    if(num <= 1){
        return num;
    }
    else{
        return (fib(num-1)+fib(num-2));
    }
};