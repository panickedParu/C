//Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the X and Y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point lies in First Quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("The point lies in second Quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("The point lies in third Quadrant.\n");
    } else if (x > 0 && y < 0) {
        printf("The point lies in Fourth Quadrant.\n");
    } else if (x == 0 && y == 0) {
        printf("The point (0, 0) is at the origin.\n");
    } else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    } else {
        printf("The point lies on the X-axis.\n");
    }

    return 0;
}
