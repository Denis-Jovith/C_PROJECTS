#include<stdio.h>
#include<stdlib.h>
//Defining a structure named 'Person'
struct Person{
    char name[10];
    int age;
    float height;
};
int main(){
    //Declare a variable of type 'Person'
    struct Person person1;
    
    //Access and assign value to the member of the sturucture
    strcpy(person1.name,"John");
    person1.age = 30;
    person1.height = 9;

    //Access and print the values ot the members
    printf("Name: %s\n",person1.name);
    printf("Age: %d\n",person1.age);
    printf("Height:%.2f\n",person1.height);
}