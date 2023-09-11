#include <stdio.h>

int main(){
    int *p,*q;
    *p = 5;
    *q = 10;
    *p++ = *q++;
    printf("%d %d",*p,*q);
    return 0;
}