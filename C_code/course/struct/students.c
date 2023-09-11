#include <stdio.h>
#include <string.h>

typedef struct student{
    int rollNo;
    char name[30];
    char dept[3];
    char course[5];
    int year;
} student;

struct student stud1, stud2;

int deptCheck(struct student s1, struct student s2){
    return (strcmp(s1.dept,s2.dept))? 1 : 0;
};

int main(){
    strcpy(stud1.dept,"CSE");
    strcpy(stud2.dept,"CSE");

    printf("%s",(deptCheck(stud1,stud2))? "Different\n" :"Same\n");
};