#include <stdio.h>

void getValues(int *a,int *b){
    *a=5;
    *b=10;
}

int main(){
    int x,y;
    getValues(&x,&y);
    printf("x = %d, y = %d \n",x,y);
    return 0;
}