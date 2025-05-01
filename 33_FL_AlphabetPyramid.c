//Write a C program to display the pyramid pattern using the alphabet

#include<stdio.h>

int main()
{
char ch='A';
int i,j,n;
printf("enter number of rows:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
    for(j=1;j<=i;j++)
    {
        printf("%c ",64+j);
    }

    printf("\n");
}

for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
    for(j=1;j<=i;j++)
    {
        printf("%c ",ch);

    }
       ch++;
    printf("\n");
}
return 0;
}
