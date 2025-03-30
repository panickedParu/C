/* Write a C program to make such a pattern as a pyramid with an asterisk.

   *
  * *
 * * *
* * * *        */

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=n-i;j++) {
            printf(" ");
        }
        for (j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
