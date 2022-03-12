#include <stdio.h>

int main()
{
    int arr[20];
    int num , count = 0;

    printf("Enter elements in array : ");
    for(num=0; num<5; num++)
    {
        scanf("%d", &arr[num]);
    }

    for(num=0; num<5; num++)
    {
        if(arr[num] < 0)
        {
            count++;
        }
    }

    printf("\nTotal negative elements in array = %d", count);

    return 0;
}
