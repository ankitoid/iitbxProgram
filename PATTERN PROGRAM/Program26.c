#include <stdio.h>

int main()
{
    int row , col , rowNo;
    int count;

    printf("Enter the number of row : ");
    scanf("%d", &rowNo);

    count = rowNo * 2 - 1;

    for(row=1; row<=count; row++)
    {
        for(col=1; col<=count; col++)
        {
            if(col==row || (col==count - row + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
