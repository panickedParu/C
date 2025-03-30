//C program to check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a + b > c && a + c > b && b + c > a) {
        int perimeter = a + b + c;
        printf("The given values form a triangle.\n");
        printf("Perimeter of the triangle: %d\n", perimeter);
    } else {
        printf("The given values do not form a triangle.\n");
    }

    return 0;
}

