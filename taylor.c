#include <stdio.h>

float factorial(float n){
    if(n == 0){
        return 1;
    }
    else{
        return  n*factorial(n-1);
    }
}

float power(float a, float b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}

float taylor(float n,float x){
    if(n == 0){
        return 1.0;
    }
    else{
        return (power(x,n)/factorial(n)) + taylor(n-1,x);
    }
}

int main(){
    float num;
    float x;
    printf("Enter the no of terms in series and value of x ");
    scanf("%f %f",&num,&x);
    printf("The value of e^%d = %f \n",(int) x, taylor(num,x));
    return 0;
}