#include <stdio.h>
#include <math.h>

int main(){
    int a, r, n, sum;
    printf("Enter the first term, common ratio, number of terms\n");
    scanf("%d", &a);
    scanf("%d", &r);
    scanf("%d", &n);

    if (r>1) {
        sum = a*(((pow(r,n))-1)/(r-1));
    }
    else {
        sum = a*((1-pow(r,n))/(1-r));
    }

    printf("The sum is : %d\n", sum);
    return 0;
}