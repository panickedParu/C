//Write a program in C to display a given number in reverse order

#include<stdio.h>
int main()
{
int n,temp,reverse=0;
printf("Enter a Number:");
scanf("%d",&n);

for(;n!=0;n=n/10)
{
temp=n%10;
reverse=reverse*10+temp;
}
printf("\nReversed number:%d",reverse);
return 0;
}
