#include <stdio.h>

int main()
{
    int row, col, RowNumber;

    printf("Enter number of rows : ");
    scanf("%d", &RowNumber);

    for(row=1; row<=RowNumber; row++)
    {
        for(col=row; col<=RowNumber; col++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
