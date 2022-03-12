#include<stdio.h>

int main()
{
    int arr[50] , position , num , size;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    printf("\nEnter elements in the array : ");
    for(num=0; num<size; num++)
    {
        scanf("%d", &arr[num]);
    }

    printf("\nEnter the deletion position of array : ");
    scanf("%d",&position);

    if(position>=num+1)
        printf("Deletion is not possible.");

    else
    {
        for(num=position-1 ; num<size-1 ; num++)
        {
            arr[num] = arr[num+1];
        }
    }

    printf("\nArray after Deletion is ");

    for(num=0 ; num<size-1 ; num++)
    {
        printf("%d\t",arr[num]);
    }

    return 0;

}
