#include <stdio.h>

int main()
{
    int row , col , rowNo;
    int star=1, spaces;

    printf("Enter number of columns : ");
    scanf("%d", &rowNo);


    spaces = rowNo-1;

    for(row=1; row<rowNo*2; row++)
    {
        /* leading spaces */
        for(col=1; col<=spaces; col++)
            printf(" ");

        for(col=1; col<=star; col++)
            printf("*");

        printf("\n");

        if(row < rowNo)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }

    return 0;
}
