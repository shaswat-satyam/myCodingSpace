#include <stdio.h>

int power(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}

int main(){
    int num,exponent;
    printf("Enter your Number and exponent :");
    scanf("%d %d",&num,&exponent);
    printf("%d ^ %d = %d \n",num,exponent,power(num,exponent));
    return 0;
}