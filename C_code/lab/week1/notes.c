#include <stdio.h>

int change(int *amount, int denomination ){
    int number;
    number = *amount / denomination;
    *amount -= number * denomination;
    return number;
}

int main(){
    int amount,total;
    printf("Enter the amount ");
    scanf("%d",&amount);
    total = change(&amount, 2000);
    total += change(&amount, 500);
    total += change(&amount, 200);
    total += change(&amount, 100);
    total += change(&amount, 50);
    total += change(&amount, 20);
    total += change(&amount, 10);
    total += change(&amount, 1);

    printf("The total No of notes is %d\n",total);
    return 0 ;
}