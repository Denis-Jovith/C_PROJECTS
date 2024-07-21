// #include <stdio.h>
// #include <string.h>

// #define NUM_STUDENTS 10

// typedef struct {
//     char name[50];
//     int reg_no;
//     int marks;
// } Student;

// void findTopThreeStudents(Student students[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (students[i].marks < students[j].marks) {
//                 Student temp = students[i];
//                 students[i] = students[j];
//                 students[j] = temp;
//             }
//         }
//     }

//     printf("1st Rank: %s with marks %d\n", students[0].name, students[0].marks);
//     printf("2nd Rank: %s with marks %d\n", students[1].name, students[1].marks);
//     printf("3rd Rank: %s with marks %d\n", students[2].name, students[2].marks);
// }

// int main() {
//     Student students[NUM_STUDENTS] = {
//         {"Alice", 101, 85},
//         {"Bob", 102, 78},
//         {"Charlie", 103, 92},
//         {"David", 104, 88},
//         {"Eve", 105, 76},
//         {"Frank", 106, 95},
//         {"Grace", 107, 89},
//         {"Hannah", 108, 91},
//         {"Ivy", 109, 84},
//         {"Jack", 110, 77}
//     };

//     findTopThreeStudents(students, NUM_STUDENTS);

//     return 0;
// }

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

    
    printf("%s",marks[0].name);
    printf("%s",marks[1].name);
    printf("%s",marks[2].name);


}