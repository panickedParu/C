/*Create a structure called "Student" with members name, roll, and total marks.
Write a C program to input data for two students, display
their information, and find the highest marks.*/


#include<stdio.h>
#include<string.h>


struct Student
{
    char name[50];
    int roll,marks;
};

int main()
{ int n;
    printf("Enter the number of students:");
    scanf("%d",&n);

    struct Student students[n];

    for(int i=0;i<n;i++){

    printf("\nEnter information for STUDENT %d",i+1);
    printf("\nEnter your name:");
    getchar();
    fgets(students[i].name,sizeof(students[i].name),stdin);
    students[i].name[strcspn(students[i].name,"\n")]='\0';
    printf("Enter your roll:");
    scanf("%d",&students[i].roll);
    printf("Enter your total number:");
    scanf("%d",&students[i].marks);}


    for(int i=0;i<n;i++){
        printf("\nStudent %d\n",i+1);
        printf("Roll:%d\n",students[i].roll);
        printf("Name:%s\n",students[i].name);
        printf("Marks:%d\n",students[i].marks);

    }

    //displaying the best student


    int highest=0,topper=0;

    for(int i=0;i<n;i++)
    {
     if(students[i].marks>highest)
     {
         highest=students[i].marks;
         topper=i;
     }}
    printf("\nEi manusshta saradin pore\n");
    printf("Marks:%d\n",students[topper].marks);
    printf("Roll:%d\n",students[topper].roll);
    printf("Name:%s\n",students[topper].name);



return 0;    }
