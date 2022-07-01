/*a C program to input the first character of the shape (R – Rectangle, Triangle – T, Circle – C)
  and calculate thearea. The following table shows the inputs and the formula to calculate the
  area of different shapes.*/

                /******   Shape   |     Inputs      |        Area
                        Rectangle |  width, length  |   width * length
                        Triangle  |  base, height   |   base * height / 2
                        Circle    |  radius         |   π * radius * radius  *******/


#include <stdio.h>

int main()
{
    //declaring variables
    char shape;
    float width, length, base, height,radius, area;

    //get input of the shape
    printf("Enter the first character of the shape (R, T, C) : ");
    scanf(" %c", &shape);

    //selecting the shape
    if(shape == 'R')
    {
        //get input values and asign in to variables
        printf("Enter width : ");
        scanf(" %f", &width);
        printf("Enter length : ");
        scanf(" %f", &length);

        //operations - calculate the area
        area = width * length;

        //print the area
        printf("Area of the rectangle = %.2f", area);
    }
    else if(shape == 'T')
    {
        //get input values and asign in to variables
        printf("Enter base : ");
        scanf(" %f", &base);
        printf("Enter height : ");
        scanf(" %f", &height);

        //operations - calculate the area
        area = base * height * 1/2;

        //print the area
        printf("Area of the triangle = %.2f", area);
    }
     else if(shape == 'C')
    {
        //get input values and asign in to variables
        printf("Enter radius : ");
        scanf(" %f", &radius);

        //operations - calculate the area
        area = radius * radius * 22/7;

        //print the area
        printf("Area of the circle = %.2f", area);
    }
    else
    {
        printf("Invalid input......");
    }

    return 0;

}