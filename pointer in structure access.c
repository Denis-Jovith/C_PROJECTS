#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int height;
    char name[10];
    int age;
};
int main()
{
    struct Student student1;
    struct Student *ptr;
    ptr = &student1;
    strcpy(ptr->name,"John");
    ptr->age = 30;
    ptr->height= 5.0;

    printf("Name: %s\n",ptr->name);
    printf("Age: %d\n",ptr->age);
    printf("Height: %.2f\n",ptr->height);
}