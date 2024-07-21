#include<stdio.h>
#include<stdlib.h>
struct Student{
char name[10];
int regNo;
int mark;
int marks[6];
};
int main()
{
    int i,j,temp;
    struct Student marks[10];
    
    //assining values to marks[0]
    strcpy(marks[0].name,"Loshilu");
    marks[0].regNo=1234;
    marks[0].mark=98;
    
    //assining values to marks[0]
    strcpy(marks[1].name,"Denis");
    marks[1].regNo=12345;
    marks[1].mark=88;
    
    //assining values to marks[0]
    strcpy(marks[2].name,"Rahman");
    marks[2].regNo=1234567;
    marks[2].mark=79;
    
    //assining values to marks[0]
    strcpy(marks[3].name,"Oituu");
    marks[3].regNo=1284934;
    marks[3].mark=80;
    
    //assining values to marks[0]
    strcpy(marks[4].name,"Jackson");
    marks[4].regNo=12839934;
    marks[4].mark=58;
    
    //assining values to marks[0]
    strcpy(marks[5].name,"Kibona");
    marks[5].regNo=123894044;
    marks[5].mark=100;
    

    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(marks[i].mark<marks[j].mark)
            {
                struct Student temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    
    printf("%s\t",marks[0].name);
    printf("%s\t",marks[1].name);
    printf("%s\tA",marks[2].name);


}