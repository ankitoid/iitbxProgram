#include<stdio.h>

int main()
{
    int source[20], dest[20];
    int num;


    printf("Enter elements of source array : ");
    for(num=0; num<5; num++)
    {
        scanf("%d", &source[num]);
    }

    for(num=0; num<5; num++)
    {
        dest[num] = source[num];
    }

    printf("\nElements of source array are : ");
    for(num=0; num<5; num++)
    {
        printf("%d\t", source[num]);
    }

    printf("\nElements of dest array are : ");
    for(num=0; num<5; num++)
    {
        printf("%d\t", dest[num]);
    }

    return 0;
}
