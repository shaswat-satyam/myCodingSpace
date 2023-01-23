#include <stdio.h>

struct record{
    int id;
    int salary;
    char name[30];
};

int main(){
    int m,n;

    printf("Enter the number of managers and workers: ");
    scanf("%d %d",&m,&n);

    struct record managers[m];
    struct record workers[n];

    printf("Enter the records of manager(id, salary, fName)\n");
    for(int i = 0; i < m ; i++){
        scanf("%d %d %s",&managers[i].id,&managers[i].salary,managers[i].name);
    }

    printf("Enter the records of workers(id, salary, fName)\n");
    for(int i = 0; i < n ; i++){
        scanf("%d %d %s",&workers[i].id,&workers[i].salary,workers[i].name);
    }

    printf("\nManagers List\n------------------- \n|id|Name|Salary|\n");
    for(int i = 0; i < m ;i++){
        printf("|%d|%s|%d|\n",managers[i].id,managers[i].name,managers[i].salary);
    }

    printf("\nWorkers List\n-------------------- \n|eId|Name|salary|\n");
    for(int i = 0; i < n ;i++){
        printf("|%d|%s|%d|\n",workers[i].id,workers[i].name,workers[i].salary);
    }
}