#include<stdio.h>
#include<stdlib.h>

struct student
{
int rollno;
char *name;
int m1,m2,m3;
}s1;

void main()
{
FILE *fp;
fp=fopen("data.dat","wb"); //opening binary file in writing mode
if(fp==NULL)
{
printf("File could not open");
exit(0);
}
int choice;
printf("Read(0), Append(1), Edit(3)");
scanf("%d",&choice);


if(choice == 0){
    printf("\nRecords in Student File are:");
    printf("\n=======================");
    int i=1;
    while((fread(&s1,sizeof(s1),1,fp)==1))
    {
        
        printf("\nRecord No:%d",i);
        printf("\n------------------");
        printf("\nRoll No:%d",s1.rollno);
        printf("\nName:%s",s1.name);
        i++;
        printf("\n=======================");
    }
}
else if(choice == 1){
    printf("Enter student details \n");
    printf("Roll No:");
    scanf("%d",&s1.rollno);
    printf("Name:");
    scanf("%s",s1.name);
    printf("Marks in three subjects:");
    scanf("%d",&s1.m3);
    scanf("%d",&s1.m2);
    scanf("%d",&s1.m1);
    fwrite(&s1,sizeof(s1),1,fp);     //writing to binary file
    printf("Record has been added successfully…!!");
}
fclose(fp);
} 