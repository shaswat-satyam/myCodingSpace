#include <stdio.h>

struct cricketer
{
    char name[30];
    int age;
    int nMatch;
    float average;
};

int main(){

    struct cricketer team[20];
    
    for(int i =0; i < 20; i++){
        printf("Enter the name, age, Number of test matches, average");
        scanf("%s %d %d %f",team[i].name,&team[i].age,&team[i].nMatch,&team[i].average);
    }

    printf("The records are:\n|Name|Age|nMatch|Average|\n");
    for(int i =0; i < 20; i++){
        printf("|%s| %d| %d| %f|\n",team[i].name,team[i].age,team[i].nMatch, team[i].average);
    }
}