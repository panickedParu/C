//Write a C program to find whether a given year is a leap year or not.

#include<stdio.h>

int main()
{
    int year;
    printf("Enter an year:");
    scanf("%d",&year);

    if(year%4==0){
        printf("Entered year is a leap year");}
    else{printf("The Year is not a leap year");}

 return 0;
}
