#include <stdio.h>

int main(){
    int input;
    printf("Enter your Number ");
    scanf("%d",&input);
    if (input > 0){
        printf("%d is Positive \n", input);
    }
    else if (input < 0){
        printf("%d is negative \n", input);
    }
    else{
        printf("The number is 0 \n");
    }
    return 0;
}