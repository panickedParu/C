//write a c program in C to display the sum of the series (9+99+999+9999+...)

#include<stdio.h>
int main()
{
int n,i,sum=0,temp=9;
printf("Enter the number of Sequences:");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    printf("%d ",temp);

    sum+=temp;
    temp=temp*10+9;}
    printf("\nThe sum of the sequence:%d",sum);

return 0;
}
