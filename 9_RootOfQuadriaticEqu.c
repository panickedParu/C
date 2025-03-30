//Write a C program to calculate the root of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realpart, imgpart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        realpart = -b / (2 * a);
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2f + %.2fi\n", realpart, imgpart);
        printf("Root 2 = %.2f - %.2fi\n", realpart, imgpart);
    }

    return 0;
}
