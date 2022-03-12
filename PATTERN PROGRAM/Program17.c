#include <stdio.h>

int main()
{
    int row , col , rowNo;

    printf("Enter number of rows : ");
    scanf("%d", &rowNo);

    for(row=1; row<=rowNo; row++)
    {
        /* leading spaces */
        for(col=1; col<row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=(rowNo*2 -(2*row-1)); col++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
