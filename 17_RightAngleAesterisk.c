//Write a program in C to display a pattern like a right angle triangle using an asterisk

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1;i<=n;i++){

        for (j= 1;j <=i;j++){
            printf("*");}
            printf("\n");
        }
        return 0;}
