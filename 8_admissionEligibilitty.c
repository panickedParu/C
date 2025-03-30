//Write a C program to determine eligibility for admission to a professional course based on the following criteria

#include <stdio.h>

int main() {
    int math, physics, chemistry, total, math_physics_total;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &math);

    printf("Enter marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    total = math + physics + chemistry;
    math_physics_total = math + physics;

    if ((math >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || math_physics_total >= 140) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is NOT eligible for admission.\n");
    }

    return 0;
}

