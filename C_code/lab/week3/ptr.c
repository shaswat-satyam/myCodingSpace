#include <stdio.h>

int main(){
    int x =10;
    int *ptr = &x;
    printf("The value of the pointer is %d\n",*ptr);
    ptr = NULL;
    if(ptr == NULL){
        printf("Pointer is Null\n");
    }
    else
        printf("Pointer is not null\n");

    return 0;
}