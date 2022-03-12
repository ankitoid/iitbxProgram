#include <stdio.h>

int main()
{
    int num;
    int arr[20], sum = 0, avg;


    printf("Enter the elements of array : ");
    for (num = 0; num < 5; ++num)
    {
        scanf("%d", &arr[num]);
        sum += arr[num];
    }

    avg = sum / num;

    printf("Average of array element is = %d", avg);

    return 0;
}
