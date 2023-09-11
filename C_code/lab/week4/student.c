#include<stdio.h>
#include<stdlib.h>

struct student
{
int rollno;
char name[50];
int m1,m2,m3;
};

void main()
{
FILE *fp;
fp=fopen("data.bin","wb+"); //opening binary file in writing mode
if(fp==NULL)
{
printf("File could not open");
exit(0);
}
struct student s1;
int choice;
printf("Read(0), Append(1), Edit(2)");
scanf("%d",&choice);


if(choice == 0){
    printf("\nRecords in Student File are:");
    printf("\n=======================\n");
    struct student s2;
    fread(&s2,sizeof(s1),1,fp);
    printf("Roll No:%d ",s2.rollno);
    printf("Name:%s ",s2.name);
    printf("Marks in three subjects:%d %d %d\n",s2.m1,s2.m2,s2.m3);
    
}
else if(choice == 1){
    printf("Enter student details \n");
    printf("Roll No:");
    scanf("%d",&s1.rollno);
    printf("Name:");
    scanf("%s",s1.name);
    printf("Marks in three subjects:");
    scanf("%d",&s1.m1);
    scanf("%d",&s1.m2);
    scanf("%d",&s1.m3);

    fwrite(&s1,sizeof(s1),1,fp);
       //writing to binary file
    printf("Record has been added successfully…!!");
}
fclose(fp);
} 