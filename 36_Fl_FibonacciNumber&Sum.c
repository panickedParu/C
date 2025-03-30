//Fibonacci Series Display and it's sum


#include<stdio.h>
int main()
{
int i,n,a=0,b=1,next=0,sum=0;
printf("enter the number of terms:");
scanf("%d",&n);


printf("The first %d Fibonacci numbers are ",n);
for(i=1;i<=n;i++)
{
if(i==1)
{printf("%d ",a);
sum=sum+a;}
if(i==2)
{printf("%d ",b)
;sum=sum+b;}
else {
next=a+b;
a=b;
b=next;
printf("%d ",next);

sum=sum+next;
}}
printf("\nThe sum of first %d Fibonacci numbers is:%d",n,sum);

return 0;
}
