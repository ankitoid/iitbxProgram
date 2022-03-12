#include <stdio.h>

int main()
{
    int rowNo, colNo, row, col;

    printf("Enter number of rows: ");
    scanf("%d", &rowNo);
    printf("Enter number of columns: ");
    scanf("%d", &colNo);

    for(row=1; row<=rowNo; row++)
    {
        for(col=row; col<=colNo; col++)
        {
            printf("%d", col);
        }

        for(col=row; col>1; col--)
        {
            printf("%d", colNo);
        }

        printf("\n");
    }

    return 0;
}
