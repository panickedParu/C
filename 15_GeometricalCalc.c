// Write a C program which computes the area of various geometrical shapes using a menu-driven approach

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float length, breadth, base, height, radius, area;

    printf("1. Circle\n2.Rectangle\n3.trngle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Input radius of the circle: ");
            scanf("%f", &radius);

            printf("The area is: %f\n", area=M_PI * radius * radius);
            break;

        case 2:
            printf("Input length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("The area is: %f\n", area);
            break;

        case 3:
            printf("Input base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area is: %f\n", area);
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 3.\n");
    }

    return 0;
}

