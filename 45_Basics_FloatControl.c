/*Write a program that print the value 342.8976 in fixed poim format with the following specification:
(i) Correct to two decimal places, (ii) Correct to zero decimal places.*/


#include<stdio.h>

int main(){
    float value =342.8976;

    printf("Value to two decimal places: %.2f\n",value);

    printf("Value to zero decimal places: %.0f\n",value);

    return 0;
}
