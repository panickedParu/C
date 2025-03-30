//C program to find out the HCF and LCM of a given number

#include<stdio.h>

int main()
{

int n1,n2,hcf,temp1,num1,num2,lcm;

printf("Enter 2 integers:");
scanf("%d %d",&n1,&n2);

num1=n1;
num2=n2;

for(;n2!=0;)
{
temp1=n2;
n2=n1%n2;
n1=temp1;
}

hcf=n1;

printf("\nHighest common factor is:%d",hcf);

lcm=(num1*num2)/hcf;

printf("\nLeast common multiple is:%d",lcm);



return 0;}
