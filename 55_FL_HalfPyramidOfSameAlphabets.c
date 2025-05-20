/*Write a program to print half pyramid of alphabets as shown below-

A
B B
C C C
D D D D
E E E E E */

#include<stdio.h>

int main(){
    int n,i,j;
    char currentChar='A';

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++){
            printf("%c ",currentChar);
        }
        currentChar++;
        printf("\n");
    }

    return 0;
}
