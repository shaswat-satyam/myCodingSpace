#include <stdio.h>

int readint();
int palindrome(int a);

int main(){
    int input, output;

    input = readint();
    output = palindrome(input);

    if(output==1)
        printf("%d is a palindrome",input);
    else
        printf("%d is not a palindrome",input);
    return 0;
}

int readint(){
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    return n;
}
int palindrome(int n){
    int temp,rmor,rev=0;
    temp = n;
    while(n!=0){
        rmor = n%10;
        rev = rev * 10 +rmor;
        n = n/10;
    }
    if(rev==temp)
        return 1;
    else
        return 0;
}