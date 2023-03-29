#include <stdio.h>

struct time{
    int hour;
    int min;
    int sec;
};

int cmp(struct time t1, struct time t2){
    if(t1.hour != t2.hour){
        return t1.hour - t2.hour;
    }
    else if(t1.min != t2.min){
        return t1.min - t2.min;
    }
    else{
        return t1.sec - t2.sec;
    }
}


int main(){
    struct time t1,t2;

    t1.hour = 15; t1.min = 3; t1.sec = 54;
    t2.hour = 15; t2.min = 30; t2.sec = 54;

    printf("%d\n",cmp(t1,t2));

    return 0;
}