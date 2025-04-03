//Write a c program to Print Pascals Triangle

#include<stdio.h>

int main(){
int rows,i,j,num;
printf("Enter the number of rows for Pascal's Triangle: ");
scanf("%d",&rows);

for(i=0;i<rows;i++) {
num=1; //First value in each row is always 1
for (j=0;j<rows-i-1;j++){
printf("  ");
}
for(j=0;j<=i;j++) {
printf("%d",num);
num=num*(i-j)/(j+1);
}

printf("\n");
}

return 0;
}
