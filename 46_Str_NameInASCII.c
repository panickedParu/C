/*Write a program which reads your name from the keyboard and
output a list of ASCII codes, which represent your name.*/

#include<stdio.h>

int main()
{
    int i;
    char name[100];

    printf("Enter your Name:");
    fgets(name,sizeof(name),stdin);

    printf("ASCII code for your name:");
    for(i=0;name[i]!='\0';i++)
    { if(name[i]!='\n')
    {printf("\n%c =%d",name[i],name[i]);}
    }
    return 0;
}

