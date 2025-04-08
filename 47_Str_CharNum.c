 //Write a program to copy one string into another and count the number of characters copied.

#include<stdio.h>

int main()
{
    int i=0;
    char source[500],copied[500];
    ;

    printf("Enter the desired Line:");
    fgets(source,sizeof(source),stdin);

while(source[i]!='\0')
    {
       copied[i]=source[i];
        i++;
    }

    copied[i]='\0';

    int count=i;

    if(copied[i-1]=='\n')
    {
        copied[i-1]='\0';
        count--;
    }
    printf("Total characters Entered:%d",count);
    printf("\nCopied Character String:%s",copied);
}
