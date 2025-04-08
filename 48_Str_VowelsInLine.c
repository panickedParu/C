//Write a program to find the number of vowels and consonants in text string.


#include<stdio.h>
#include<ctype.h>


int main()
{
    int i=0;
    char line[500];
    printf("Enter your desired line:");
    fgets(line,sizeof(line),stdin);

    int vowel=0,cons=0;

    while (line[i]!='\0')
    {
        char ch=tolower(line[i]);
        i++;

    if (ch>='a'&&ch<='z'){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        vowel++;
    }
    else{cons++;}}}

    printf("The Number of Vowel and consonant are %d and %d ",vowel,cons);

    return 0;

}
