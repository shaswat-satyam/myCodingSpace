#include <stdio.h>

FILE *fp;
char ch;
int lines = 0, blines = 0, comments = 0;

int main(){

    fp = fopen("text.txt","r+");
    int status = fscanf(fp,"%c",&ch);
    while(status == 1){
        status = fscanf(fp,"%c",&ch);
        if(ch = "\n"){
            status = fscanf(fp,"%c",&ch);
            if(ch = "\n"){
                blines++;
            }
            lines++;
        }
        if(ch = "\\" ){
            status = fscanf(fp,"%c",&ch);
            if(ch = "\\"|| ch ="*"){
                comments++;
            }
        }
            
    }
    
    printf("The number of lines are: %d\n",lines);
    printf("The number of blank lines are: %d\n",blines);
    printf("The number of comments are: %d\n",comments);

    return 0;
}