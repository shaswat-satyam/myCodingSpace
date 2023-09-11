#include <stdio.h>
#include <string.h>

int main(){
    char str[100],*p;
    int vowels= 0, consonants = 0;
    printf("Enter the string:");
    scanf("%[^\n]",str);
    p = &str[0];
    while(*p!='\0'){
        if(*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O'|| *p == 'U'||*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o'|| *p == 'u')
            {vowels++;}
        else if((*p >= 'a' && *p <= 'z')||(*p >= 'A'&& *p <= 'Z'))
            {consonants++;}
        p++;
    }
    printf("Number of vowels:%d\n",vowels);
    printf("Number of consonants:%d\n",consonants);
    return 0;
}