//Write a C program to accept two integers and check whether they are equal or not.

#include<stdio.h>
int main()
{
    int Num1,Num2;
    printf("Input number 1:");
    scanf("%d",&Num1);
    printf("Input number 2:");
    scanf("%d",&Num2);
    if(Num1==Num2){
    printf("The Numbers are equal!!!");}
    else{printf("Numbers are not equal!");}
return 0;
}
