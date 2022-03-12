#include <stdio.h>

int main()
{
    int row , col , rowNo;

    printf("Enter the number of row : ");
    scanf("%d", &rowNo);

    //  outer loop
    for(row=1; row<=(rowNo * 2 - 1); row++)
    {
        //  horizontal plus
        if(row == rowNo)
        {
            for(col=1; col<=(rowNo * 2 - 1); col++)
            {
                printf("+");
            }
        }
        else
        {
            // For spaces before single plus sign
            for(col=1; col<=rowNo-1; col++)
            {
                printf(" ");
            }
            printf("+");
        }

        printf("\n");
    }

    return 0;
}
