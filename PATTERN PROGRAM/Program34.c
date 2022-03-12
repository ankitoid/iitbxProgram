#include <stdio.h>

int main()
{
    int rowNo , colNo , row , col;

    printf("Enter number of rows: ");
    scanf("%d", &rowNo);
    printf("Enter number of columns: ");
    scanf("%d", &colNo);

    for(row=1; row<=rowNo; row++)
    {
        for(col=1; col<=colNo; col++)
        {
            if(row==1 || row==rowNo || col==1 || col==colNo)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
