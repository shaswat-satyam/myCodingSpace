#include <stdio.h>
#include <string.h>
struct book{
    char name[50];
    int price;
    int numOfPages;
}book1, book2;

int main(){
    strcpy(book1.name,"Rich Dad Poor Dad"); 
    book1.price = 200;
    book1.numOfPages = 50;

    strcpy(book2.name,"Rich Dad Poor Dad"); 
    book2.price = 250;
    book2.numOfPages = 0;

    printf("First Book Details:%s %d %d",book1.name,book1.price,book1.numOfPages);

    return 0;
}