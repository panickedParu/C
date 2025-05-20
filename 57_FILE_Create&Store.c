/*1. Create & Store File

Write a program in C to create and store information in a text file.

Test Data :

Input a sentence for the file : This is the content of the file test.txt.

Expected Output :

 The file test.txt created successfully...!! */


#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char info[500]="porikkhar duidin age aisa ekhon eshob kamla khata lagtese";
    int length=strlen(info);

    file=fopen("test.text","w");

    if(file==NULL)
    {
        printf("file hoy nay");
    }
    else{
        printf("file hoise reeeeeee!");
        for(int i=0;i<length;i++)
        {
            fputc(info[i],file);

        }
        puts("\nKhule ekba rcheck de file");

        }
return 0;
}
