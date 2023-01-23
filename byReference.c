#include <stdio.h>

void add(int *num);

int main(){
    int n = 2;
    printf("The value of n before calling function is %d \n",n);
    add(&n);
    printf("The value of n after calling function is %d \n",n);
    return 0;
}

void add(int *num){
    *num += 10;
    printf("The value of n in called function is %d \n",*num);
}