//write a program to see if a number is a Armstrong Number or not

#include<stdio.h>
#include<math.h>

void isArmstrong(int n);
int main()
{
int n;
printf("Enter an Number:");
scanf("%d",&n);

isArmstrong(n);
}

void isArmstrong(int n)
{
int orginal=n,numDigits=0,remainder=0,sum=0;
while(n!=0)
{
n=n/10;
numDigits++;
}

n=orginal;

while(n!=0)
{
remainder=n%10;

sum=sum+(int)pow(remainder,numDigits);
n=n/10; }



if(orginal==sum){printf("Armstrong Number");}
else{printf("Not a Armstrong Number");}

}

