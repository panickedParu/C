/*Write a program that reads a character from keyboard an | prints it in reverse case.
 That is, if the input is upper case, the outfit will be lower case and vice versa.*/

#include<stdio.h>


 int main()
 {
     char ch;
     printf("Enter an alphabet:");
     scanf("%c",&ch);

     if(ch>='A' && ch<='Z')
     {
         ch+=32;
     }
     else if(ch>='a' && ch<='z')
     {
         ch-=32;
     }
     printf("Alphabet in reverse Case:%c",ch);
     return 0;
 }
