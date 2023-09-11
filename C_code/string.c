#include <stdio.h>
#include <string.h>

int main(){
    char text[50];
    fgets(text,50,stdin);

    int length = strlen(text),words = 1;

    for(int i = 0 ; i < length; i++){
        if(text[i] == ' ')
            words++;
    }

    char *start, *end;

    end = &text[length-2];
    start = end;
    
    while(words--){ 
        
        while(*start != ' ' && start >= &text[0]){
            start--;
        }
        
        for(char *s = start+1; s <= end; s++){
            printf("%c",*s);
        }

        printf(" ");

        end = start--;
    }

    return 0;
}