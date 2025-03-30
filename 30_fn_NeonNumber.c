//write a program to see if a number is a Neon Number or not

#include<stdio.h>

void isNeon(int n);
int main()
{
int n;
printf("Enter a Number:");
scanf("%d",&n);

isNeon(n);
}

void isNeon(int n)
{
int orginal,remainder,sqr,sum=0;
orginal=n;
sqr=n*n;

for(;sqr!=0;sqr=sqr/10)
{
    remainder=sqr%10;
    sum=sum+remainder;
}
if(orginal==sum){printf("Neon Number");}
else{printf("Not a Neon Number");}

}
