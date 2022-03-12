#include <stdio.h>

int main()
{
    int row , col , rowNo;
    int stars=1, spaces;

    printf("Enter rows to print : ");
    scanf("%d", &rowNo);

    spaces = rowNo - 1;

    for(row=1; row<rowNo*2; row++)
    {
        for(col=1; col<=spaces; col++)
            printf(" ");

        for(col=1; col<stars*2; col++)
            printf("*");

        printf("\n");

        if(row<rowNo)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}
