
#include <stdio.h>

int main()
{
    int row, col, RowNumber;

    printf("Enter value of RowNumber : ");
    scanf("%d", &RowNumber);

    for(row=1; row<=RowNumber; row++)
    {
        for(col=1; col<=row; col++)
        {
             if(col==1 || col==row || row==RowNumber)
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
