#include <stdio.h>

int main(){
    char input;
    int uVowel, lVowel;

    printf("Enter the character ");
    scanf("%c",&input);

    uVowel = (input == 'A' || input == 'E' || input == 'I' || input == 'O'|| input == 'U');
    lVowel = (input == 'a' || input == 'e' || input == 'i' || input == 'o'|| input == 'u');
    if(uVowel || lVowel ){
        printf("%c is a vowel \n",input);
    }
    else{
        printf("%c is a consonant \n",input);
    }

    return 0;
}