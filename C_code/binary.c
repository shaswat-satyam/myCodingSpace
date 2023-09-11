#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

void write_to_file(struct student *s)
{
    FILE *fp;
    fp = fopen("student.bin", "ab");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    fwrite(s, sizeof(struct student), 1, fp);
    fclose(fp);
}

void read_from_file()
{
    FILE *fp;
    struct student s;
    fp = fopen("student.bin", "rb");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    while (fread(&s, sizeof(struct student), 1, fp))
    {
        printf("Name: %s\n", s.name);
        printf("Roll No: %d\n", s.roll_no);
        printf("Marks: %.2f\n", s.marks);
    }
    fclose(fp);
}

void edit_student_data(int roll_no, float marks)
{
    FILE *fp;
    struct student s;
    fp = fopen("student.bin", "r+b");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    while (fread(&s, sizeof(struct student), 1, fp))
    {
        if (s.roll_no == roll_no)
        {
            s.marks = marks;
            fseek(fp, -sizeof(struct student), SEEK_CUR);
            fwrite(&s, sizeof(struct student), 1, fp);
            break;
        }
    }
    fclose(fp);
}

int main()
{
    int choice, roll_no;
    float marks;
    struct student s;
    while (1)
    {
        printf("1) Write to file, ");
        printf("2) Read from file, ");
        printf("3) Edit student data, ");
        printf("4) Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter name, roll no, marks: ");
            scanf("%s %d %f", s.name,&s.roll_no,&s.marks);
            write_to_file(&s);
            break;
        case 2:
            read_from_file();
            break;
        case 3:
            printf("Enter roll no, marks");
            scanf("%d %f", &roll_no,&marks);
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid Choice\n");
            break;}
    }
     return 0;
    }