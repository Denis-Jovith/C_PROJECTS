struct Student{
    int id;
    float cgpa;
    char name[10];
};
main()
{
    struct Student s1;
    printf("Enter your id\n");
    scanf("%d",&s1.id);
    printf("Enter your name\n");
    scanf("%s",&s1.name);
    printf("Enter your cgpa\n");
    scanf("%f",&s1.cgpa);

    printf("You are id: \t %d\n",s1.id);
    printf("Your name is : \t %s\n",s1.name);
    printf("Your cgpa is : \t %f\n",s1.cgpa);
}