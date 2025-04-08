//write a C program to print the factorial of a given number using recursion

#include<stdio.h>

int factorial(int n);
int factorial(int n)
{

if(n==1||n==0){return 1;}
{return n*factorial(n-1);}

}

int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);

if(num<0)
{
printf("\nFactorial is not defined for negative numbers");

}
else { printf("\nFactorial of %d is %d",num,factorial(num));}
return 0;}


