
#include <stdio.h>

int main()
{
    int row , col , rowNo ;

    printf("Enter the number of row : ");
    scanf("%d", &rowNo);

    for(row=1; row<rowNo; row++)
    {
        // Print trailing spaces
        for(col=1; col<=rowNo-row; col++)
        {
            printf(" ");
        }

        // Print inverted right triangle star pattern
        for(col=row; col<=rowNo; col++)
        {
            printf("*");
        }

        printf("\n");
    }


    for(row=1; row<=rowNo; row++)
    {

        for(col=1; col<row; col++)
        {
            printf(" ");
        }

        // Print simple right triangle star pattern
        for(col=1; col<=row; col++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
