//Write a program to count number of words in a given text or sentence.



#include <stdio.h>
#include <ctype.h>

int main() {
    char text[500];
    int i=0,words=0;
    int inWord=0;
    printf("Enter a sentence or text: ");
    fgets(text,sizeof(text),stdin);

    while(text[i]!='\0'){
        if(isspace(text[i])){

            if(inWord){
                inWord=0;
            }
        }else{

            if(!inWord){
                inWord=1;
                words++;
            }
        }
        i++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}

