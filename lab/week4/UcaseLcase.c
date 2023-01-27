#include <stdio.h>

FILE *fp;
char ch;
int lCase = 0, uCase = 0, num = 0, sSymbols = 0;

int main(){
    fp = fopen("text.txt","r+");
    int status = fscanf(fp,"%c",&ch);
    while(status == 1){
        status = fscanf(fp,"%c",&ch);
        if('A' <= ch && ch <= 'Z')
            uCase++;
        else if('a' <= ch && ch <= 'z')
            lCase++;
        else if(48 <= ch && ch <= 57)
            num++;
        else
            sSymbols++;
    }
    
    printf("The number of lowercase characters are: %d\n",lCase);
    printf("The number of uppercase characters are: %d\n",uCase);
    printf("The number of digits are: %d\n",num);
    printf("The number of special symbols are: %d\n",sSymbols);
}