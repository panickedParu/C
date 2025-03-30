//Write a C program to find the largest of three numbers.

#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    printf("Enter 3rd number:");
    scanf("%d",&num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The 1st Number is the greatest among three. \n");
        }
        else
        {
            printf("The 3rd Number is the greatest among three. \n");
        }
    }
    else if (num2 > num3)
        printf("The 2nd Number is the greatest among three \n");
    else
        printf("The 3rd Number is the greatest among three \n");

        return 0;
}
