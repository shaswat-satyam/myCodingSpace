#include <stdio.h>

struct st{
    int x;
    int y;
};

int main(){
    printf("%ld",sizeof(struct st));
    return 0;
}