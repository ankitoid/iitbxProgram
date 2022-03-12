#include<stdio.h>

int main()
{
    int row, col , rowNo, columnNo=1;

    printf("Enter number of columns : ");
    scanf("%d",&rowNo);


    for(row=1;row<rowNo*2;row++)
    {
        for(col=1; col<=columnNo; col++)
        {
            printf("*");
        }

        if(row < rowNo)
        {
            columnNo++;
        }
        else
        {
            columnNo--;
        }

        printf("\n");
    }

    return 0;
}
