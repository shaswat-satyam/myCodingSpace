#include <stdio.h>

void towers(int num, char src, char aux, char dest);

int main(){
    int num;
    char src = 'S', aux = 'A', dest = 'D';
    printf("Enter the number of Discs : ");
    scanf("%d",&num);
    towers(num,src,aux,dest);
    return 0;
}

void towers(int n, char src, char aux, char dest){
    if(n==1){
        printf("The Move is: %c to %c \n", src, dest);
    }
    else{
        towers(n-1,src,dest,aux);
        towers(1,src,aux,dest);
        towers(n-1,aux,src,dest);
    }
}