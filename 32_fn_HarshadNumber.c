//write a program to see if a number is a Harshad Number or not

#include<stdio.h>

void isHarshad(int n);
int main()
{
int n;
printf("Enter a Number:");
scanf("%d",&n);

isHarshad(n);
}

void isHarshad(int n)
{
int orginal=n,remainder,sum=0;
while(n!=0)
{
remainder=n%10;
sum=sum+remainder;
n=n/10;
}
if(orginal%sum==0){printf("Harshad Number");}
else{printf("Not a Harshad Number");}

}

