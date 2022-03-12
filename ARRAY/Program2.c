#include <stdio.h>

int main()
{
    int arr[20];
    int size=5, num;


    printf("Enter elements in array : ");
    for(num=0; num<size; num++)
    {
        scanf("%d", &arr[num]);
    }

    printf("\nArray in reverse order: ");
    for(num = size-1; num>=0; num--)
    {
        printf("%d\t", arr[num]);
    }

    return 0;
}
