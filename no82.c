#include<stdio.h>
#include<stdlib.h>
struct Book{
int id;
char title[100];
char author[100];
};
int main()
{
    struct Book book1;
    struct Book book2;
    
    book1.id = 101;
    strycpy(book1.title,"C Programming");
}
