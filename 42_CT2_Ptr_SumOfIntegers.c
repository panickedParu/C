/*write a c program the takes an array of integers as input
from user and calculates the sum of the elements using pointers*/

#include<stdio.h>

int main()
{
int i,n,sum=0;


printf("Enter the number of elements:");
scanf("%d",&n);


int arr[n];
int *ptr=arr;
printf("Input %d integers:");
for(i=0; i<n;i++)
{
scanf("%d",ptr+i);
}
for(i=0;i<n;i++)
{
sum=sum+*(ptr+i);}
printf("The sum of the given integers are: %d",sum);
return 0;
}

