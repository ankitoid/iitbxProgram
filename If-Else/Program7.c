#include<stdio.h>

int main()
{

    int num1 , num2 , i , result ;

    printf("Press 1 for Addition .");
    printf("\nPress 2 for Subtraction .");
    printf("\nPress 3 for Multiply .");
    printf("\nPress 4 for Division .\n");
    scanf("%d",&i);

    printf("\nEnter the numbers : ");
    scanf("%d%d",&num1,&num2);

    if(i == 1)
    {
         result = num1 + num2 ;
        printf("The Addition of %d and %d is : %d",num1,num2,result);
    }


    if(i == 2)
    {
         result = num1 - num2 ;
        printf("The Subtraction of %d and %d is : %d",num1,num2,result);
    }


    if(i == 3)
    {
         result = num1 * num2 ;
        printf("The Multiply of %d and %d is : %d",num1,num2,result);
    }


    if(i == 4)
    {
         result = num1 / num2 ;
        printf("The Division of %d and %d is : %d",num1,num2,result);
    }


    return 0;


}
