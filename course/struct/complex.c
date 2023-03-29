#include <stdio.h>

struct complex{
    int real;
    int img;
};

void display(struct complex c){
    printf("%d + i%d\n",c.real,c.img);
}

int main(){
    struct complex arr[5];
    int real, img;

    for(int i = 0; i < 5; i++){
        printf("Enter the value for %d complex number",i);
        scanf("%d %d",&real,&img);
        arr[i].real = real;
        arr[i].img = img;
    }

    for(int i = 0; i < 5; i++)
        display(arr[i]);

    return 0;
}