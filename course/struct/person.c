#include <stdio.h>
#include <string.h>

struct person
{
    char name[50];
    int salary;
    int age;
}person1,person2;

    
int main(){
    strcpy(person1.name,"Ravi");
    person1.age = 28;
    person1.salary = 15000;

    strcpy(person2.name,"Ravi");
    person2.age = 28;
    person2.salary = 15000;


    printf("Second Person's age :%d\n",person2.age);
    printf("First Person's name:%s\n",person1.name);
}