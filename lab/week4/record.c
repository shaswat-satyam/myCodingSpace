#include <stdio.h>
#include <string.h>

int main(){
    int m,n;

    int id,salary;
    char name[30];

    FILE* fw, * fm;
    fw = fopen("workers.txt","r+");
    fm = fopen("managers.txt","r+");


    printf("Enter the number of managers and workers: ");
    scanf("%d %d",&m,&n);


    printf("Enter the details of the managers :\nid salary name \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %s",&id, &salary, name);
        fprintf(fm,"%d %d %s\n",id,salary,name);
    }


    printf("Enter the details of the workers :\nid salary name \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %s",&id, &salary, name);
        fprintf(fw,"%d %d %s\n",id,salary,name);
    }
    
    return 0;
}