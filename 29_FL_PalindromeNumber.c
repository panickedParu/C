//Write a C program to check whether a number is a palindrome or not.

#include<stdio.h>
int main()
{
int n,orginal,remainder,palindrome=0;

printf("enter an number:");
scanf("%d",&n);

orginal=n;

for(;n!=0;n=n/10)
{
    remainder=n%10;
    palindrome=palindrome*10+remainder;
}
if(orginal==palindrome){printf("\nPaliondrome Number");}

else{printf("\nNot a Plaindrome Number");}

return 0;
}
