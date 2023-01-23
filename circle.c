#include <stdio.h>

void circle(int r);

int main(){
    int radius;
    printf("Enter the radius :");
    scanf("%d",&radius);
    circle(radius);
}

void circle(int r){
    float area, diameter, circumference;
    area = 3.14 * r * r;
    diameter = 2 * r;
    circumference = 2 * 3.14 * r;
    printf("Area : %.2f, Diameter : %.2f, circumference : %.2f \n",area,diameter,circumference);
}