#include <stdio.h>

int main(){
    int n, result = 1;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Pass Positive Integers only \n");
        return 0;
    }

    for(int i = 1; i <= n; i++){
        result *= i;
    }

    printf("The result is: %d \n",result);
    return 0;
}