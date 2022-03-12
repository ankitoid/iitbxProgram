#include <stdio.h>

int main()
{
    int arr[20];
    int num , even , odd;

    printf("Enter elements in array : ");
    for(num=0; num<5; num++)
    {
        scanf("%d", &arr[num]);
    }

    even = 0;
    odd  = 0;

    for(num=0; num<5; num++)
    {
        if(arr[num]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);

    return 0;
}
