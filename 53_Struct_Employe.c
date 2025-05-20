/*Create a structure named "Employee" to store employee details
such as employee ID, name, and salary.Write a program to input data
 for three employees, find the highest salary employee, and display their information.*/


#include<stdio.h>
#include<string.h>


struct Employee{
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee emp[3];
    int i,highestIndex=0;

    for(i=0;i<3;i++){
        printf("Enter details for Employee %d:\n",i+1);
        printf("ID: ");
        scanf("%d",&emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }

    for(i=1;i<3;i++){
        if(emp[i].salary>emp[highestIndex].salary){
            highestIndex=i;
        }
    }
    printf("Employee with the highest salary:\n");
    printf("ID: %d\n", emp[highestIndex].id);
    printf("Name: %s\n", emp[highestIndex].name);
    printf("Salary: %.2f\n", emp[highestIndex].salary);

    return 0;
}

