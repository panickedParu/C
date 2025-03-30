//Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.

#include<stdio.h>

int main()
{
    int age;
    printf("Enter an age:");
    scanf("%d",&age);

    if(age>=18)
        {
        printf("You can vote!!");
        }
    else if(age>=16&&age<18)
    {
        printf("You can apply for NID");
    }
    else{printf("You can not vote");}

 return 0;
}
