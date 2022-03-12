#include <stdio.h>

int main()
{
    int arr[20];
    int num;


    printf("Enter elements in the array : ");
    for(num=0; num <5; num++)
    {
        scanf("%d", &arr[num]);
    }

    printf("\nElements in array are: ");
    for(num=0; num<5; num++)
    {
        printf("%d, ", arr[num]);
    }

    return 0;
}
