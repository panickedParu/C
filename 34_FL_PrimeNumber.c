//write a C program to see if a number is prime number or not

#include<stdio.h>
int main()
{
int i,num,count=0;
printf("Enter any positve number:");
scanf("%d",&num);
if(num==1){count++;}
for(i=2;i<num;i++)
{ if(num%i==0){count++;}}
if(count==0)
{
printf("Prime Number");
}
else{printf("Not a prime number");}
return 0;
}

