/******         Adventure resort provides following packages.

            Package Type   |   Title         |     Cost per person
                 1         |  Horse ride     |        2000/=
                 2         |  Scuba Diving   |        5000/=
                 3         |  Water Rafting  |        7000/=      ******/


#include <stdio.h>

int main()
{
    //declaring variables
    int PackageType, noOfPerson, totalCost ;

    //get input of Package Type and asign to variable
    printf("Enter the Package Type(1- Horse ride, 2-Scuba Diving, 3-Water Rafting) : ");
    scanf("%d", &PackageType); 

    //selecting  the packeage type
    switch (PackageType)
    {
    case 1:
        //get input and asign values
        printf("Enter the no of person : ");
        scanf("%d", &noOfPerson);

        //calculate cost
        totalCost = noOfPerson * 2000;

        //print values
        printf("Total cost is %d", totalCost);
          break;

    case 2: 
        printf("Enter the no of person : ");
        scanf("%d", &noOfPerson);  
        totalCost = noOfPerson * 5000;

        printf("Total cost is %d", totalCost);
          break;   
    
    case 3:
        printf("Enter the no of person : ");
        scanf("%d", &noOfPerson);   
        totalCost = noOfPerson * 7000;

        printf("Total cost is %d", totalCost);
          break;    
    default:
        printf("Invalid input.....");
        break;
    }

}