/*C program to input values for three angles and display whether 
  a triangle can be formed or not using given angle values.*/

#include <stdio.h>

int main()
{
    //declaring variables
    float side1, side2, side3, sum;

    //take input values 
    printf("Enter value of first angle : ");
    scanf("%f", &side1);
    printf("Enter value of second angle : ");
    scanf("%f", &side2);
    printf("Enter value of third angle : ");
    scanf("%f", &side3);

    //operation
    sum = side1 + side2 + side3;

    //checking if statement is correct
    if(sum=180)
        printf("Tringle can be formed using this angles");
    else
        printf("Tringle cannot be formed using this angles");

    return 0;
}