#include <stdio.h>

int main()
{
    int arr[20];
    int num , sum=0;


    printf("Enter elements in the array : ");
    for(num=0; num<5; num++)
    {
        scanf("%d", &arr[num]);
    }

    for(num=0; num<5; num++)
    {
        sum = sum + arr[num];
    }


    printf("Sum of all elements of array = %d", sum);

    return 0;
}
