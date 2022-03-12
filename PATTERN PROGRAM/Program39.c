#include <stdio.h>

int main()
{
    int rowNo, colNo, row, col, k=1;

    printf("Enter number of rows: ");
    scanf("%d", &rowNo);
    printf("Enter number of columns: ");
    scanf("%d", &colNo);

    for(row=1; row<=rowNo; row++)
    {
        for(col=1; col<=colNo; col++, k++)
        {
            printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}
