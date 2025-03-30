//Write a program in C to make such a pattern like a right angle triangle with the number increased by 1

#include<stdio.h>
int main()
{
    int n,j,i,k=0;
    printf("enter the number of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",k=k+1);}
            printf("\n");
        }
return 0;
}
