#include <stdio.h>

int main()
{
    int arr[20];
    int num, max;

    printf("Enter elements in the array : ");
    for(num=0; num<5; num++)
    {
        scanf("%d", &arr[num]);
    }

    max = arr[0];

    for(num=1; num<5; num++)
    {
        if(arr[num] > max)
        {
            max = arr[num];
        }

    }

    printf("Maximum element = %d\n", max);


    return 0;
}
