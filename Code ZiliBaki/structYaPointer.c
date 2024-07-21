#include<stdio.h>
#include<stdlib.h>
struct Student{
    char name[10];
    int age;
    float gpa;
};
int main()
{
    struct Student student1;
    struct Student student2;
    struct Student *ptr1;
    struct Student *ptr2;

    ptr1=&student1;
    ptr2=&student2;
    
    strcpy(ptr1->name,"Loshilu");
    ptr1->age = 21;
    ptr1->gpa = 5;
    
    strcpy(ptr2->name,"Denis");
    ptr2->age = 21;
    ptr2->gpa = 4.5;

    printf("\n\nDetails For student1:\n");
    printf("%s\t%d\t%f\n\n\n",ptr1->name,ptr1->age,ptr1->gpa);

    printf("\n\nDetails For student2:\n");
    printf("%s\t%d\t%f\n\n\n",ptr2->name,ptr2->age,ptr2->gpa);
}