#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
}date;
struct date date1,date2;

int main(){
    

    date1.day = 18;
    date1.month = 12;
    date1.year = 2002;

    date2.day = 8;
    date2.month = 2;
    date2.year = 2015;

    int flag = (date1.day == date2.day ||                     
                date1.month == date2.month || 
                date1.year == date2.year );

    if(flag){
        printf("Equal");
    }
    else{
        printf("Unequal");
    }
    return 0;
};