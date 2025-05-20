/*Write a program to read two strings and copy one string
to another using function/without using library functions*/

#include<stdio.h>
#include<string.h>
void copystring(char destination[500],char source[500])
{
    int i=0;
    while(source[i]!='\n')
    {
        source[i]=destination[i];
        i++;
    }
    destination[i]='\n';
}

int main()
{
    char string1[500],string2[500];
    printf("Enter your first string:");
    fgets(s)






    return 0;

}


