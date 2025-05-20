/*Write a program to print continuous character pattern as shown below-

A
B C
D E F
G H I J*/


#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n;
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index=0;

    printf("enter the number of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    { for(j=1;j<=i;j++)
    {
        printf("%c",alphabet[index]);
        index++;
    }

    printf("\n");}
}
