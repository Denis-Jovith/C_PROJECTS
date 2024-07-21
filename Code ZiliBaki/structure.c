#include<stdio.h>
#include<stdlib.h>
struct Student{
    char name[10];
    int age;
    float gpa;
};
int main()
{
    struct Student student1,student2;
    
    strcpy(student1.name,"Loshilu");
    student1.age = 21;
    student1.gpa = 5;
    
    strcpy(student2.name,"Denis");
    student2.age = 21;
    student2.gpa = 4.5;

    printf("\n\nDetails For student1:\n");
    printf("%s\t%d\t%f\n\n\n",student1.name,student1.age,student1.gpa);

    printf("\n\nDetails For student2:\n");
    printf("%s\t%d\t%f\n\n\n",student2.name,student2.age,student2.gpa);
}