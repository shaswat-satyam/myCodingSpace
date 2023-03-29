#include <stdio.h>

int main(){
    char n1[30], n2[30];
    int s1, s2;

    printf("Enter the names");
    scanf("%s %s",n1,n2);
    printf("Enter the salaries");
    scanf("%d %d",&s1,&s2);

    FILE *fp = fopen("data.txt","w");

    fprintf(fp,"%s %d\n",n1,s1);
    fprintf(fp,"%s %d",n2,s2);

    fclose(fp);
    return 0;
}