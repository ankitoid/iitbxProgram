

#include <stdio.h>

int main()
{
    int row, col, RowNumber;

    printf("Enter number of RowNumber : ");
    scanf("%d", &RowNumber);

    for(row=1; row<=RowNumber; row++)
    {
        for(col=1; col<row; col++)
        {
            printf(" ");
        }

        for(col=row; col<=RowNumber; col++)
        {
            if(col==row || col==RowNumber || row==1)
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
