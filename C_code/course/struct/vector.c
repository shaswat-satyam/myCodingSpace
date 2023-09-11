#include <stdio.h>

typedef struct vector{
    int x;
    int y;
}v5;

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    return v3;
}

int main(){
    struct vector v1,v2;
    v1.x = 10; v1.y = 20;
    v2.x = 15; v2.y = 25;
    struct vector v3 = sumVector(v1,v2);
    struct vector *vp = &v3;

    printf("V.x = %d and V.y = %d ",vp->x,vp->y); 

    return 0;
}