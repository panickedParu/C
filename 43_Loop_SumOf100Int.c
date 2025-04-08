//write a c program to print the sum of first 100 integers

#include<stdio.h>

int main()
{
    int i,sum=0;

    for(i=1;i<=100;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first 100 integers is:%d",sum);
    return 0;
}
