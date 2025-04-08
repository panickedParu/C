//write a c program to swap to 2 numbers using pointers

#include<stdio.h>

int main()
{
int number1,number2,*ptr1,*ptr2,temp;
printf("Enter the first number:");
scanf("%d",&number1);
printf("Enter the second number:");
scanf("%d",&number2);

ptr1=&number1;
ptr2=&number2;

printf("Before swapping: number 1=%d and number 2=%d",*ptr1,*ptr2);
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;

printf("\nAfter swapping: number 1=%d and number 2=%d",*ptr1,*ptr2);
return 0;
}
