//write a c program in C to display the sum of the series (1+11+111+...)

#include<stdio.h>
int main()
{
int i,n,sum=0,temp=1;
printf("Enter the number of Sequences:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    printf("%d ",temp);

    sum+=temp;
    temp=temp*10+1;
}
printf("\nSum of the sequence:%d",sum);
return 0;
}
