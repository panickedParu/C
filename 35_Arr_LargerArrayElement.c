//write a program in C to get the largest Element in the array

#include<stdio.h>

int main()
{
int size,i,max;

printf("Enter the number of elements:");
scanf("%d",&size);

int elements[size];

printf("Enter the elements:");

for(i=0;i<size;i++)
{
scanf("%d",&elements[i]);
}

max=elements[0];

for(i=1;i<size;i++)
{
if(elements[i]>max)

{max=elements[i];}
}
printf("Largest element in the array:%d",max);

return 0;
}
