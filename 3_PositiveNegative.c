//Write a C program to check whether a given number is positive or negative.

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    if (number > 0)
    {printf("The Number is Positive\n");}
    else if(number==0){printf("You have entered 0\n");}
    else{printf("The Number is Negative\n");}

    return 0;
}
