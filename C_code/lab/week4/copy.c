#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    FILE *mf;
    FILE *cf;
    char ch;
    if(argc!=3){
        printf("Invalid argument ");
        return 1;
    }
    mf = fopen(argv[1],"r");
    cf = fopen(argv[2],"w");

    if(mf==NULL || cf == NULL){
        printf("Invalid File");
        return 1;
    }
    ch = fgetc(mf);
    while(ch!=EOF)
    {
        fputc(ch,cf);
        ch = fgetc(mf);
    }
    printf("File Copied Successfully\n");
    fclose(mf);
    fclose(cf);
}