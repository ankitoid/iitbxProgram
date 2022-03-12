#include<stdio.h>

int main()
{
    int arr[20] , arr1[20] , arr2[20] , num , num2;

    printf("Enter elements in the first array : ");
    for(num=0; num<5; num++)
    {
        scanf("%d", &arr[num]);
        arr2[num] = arr[num];
    }

    num2 = num;
    printf("\nEnter elements in the second array : ");
    for(num=0; num<5; num++)
    {
        scanf("%d", &arr1[num]);
        arr2[num2] = arr1[num];
        num2++;
    }

    printf("\n\nMERGED ARRAY");
    printf("\nElements of third the array : ");
    for(num=0; num<num2; num++)
    {
        printf("%d\t", arr2[num]);
    }

    return 0;


}
