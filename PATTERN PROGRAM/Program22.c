#include <stdio.h>

int main()
{
    int row , col, rowNo;

    printf("Enter value of row : ");
    scanf("%d", &rowNo);

    for(row=1; row<=rowNo; row++)
    {
        for(col=row; col<=rowNo; col++)
        {
            printf("*");
        }

        for(col=1; col<=(2*row-2); col++)
        {
            printf(" ");
        }

        for(col=row; col<=rowNo; col++)
        {
            printf("*");
        }

        printf("\n");
    }


    for(row=1; row<=rowNo; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }

        for(col=(2*row-2); col<(2*rowNo-2); col++)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
