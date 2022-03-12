
#include <stdio.h>

int main()
{
    int row, col, RowNumber;

    printf("Enter number of rows : ");
    scanf("%d", &RowNumber);

    for(row=1; row<=RowNumber; row++)
    {
        for(col=1; col<=RowNumber; col++)
        {
            if(row==1 || row==RowNumber || col==1 || col==RowNumber)
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
