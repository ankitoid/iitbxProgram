
#include <stdio.h>

int main()
{
    int arr[20];
    int num, min;

    printf("Enter elements in the array : ");
    for(num=0; num<5; num++)
    {
        scanf("%d", &arr[num]);
    }

    min = arr[0];

    for(num=1; num<5; num++)
    {
        if(arr[num] < min)
        {
            min = arr[num];
        }

    }

    printf("Maximum element = %d\n", min);


    return 0;
}
