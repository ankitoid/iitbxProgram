#include<stdio.h>

int main()
{
    int arr[100] , size , num , num1 , count=0 ;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    printf("\nEnter elements in the array : ");
    for(num=0; num<size; num++)
    {
        scanf("%d", &arr[num]);
    }

    for(num=0; num<size; num++)
    {
        for(num1=num+1 ; num1<size ; num1++)
        {
            if(arr[num] == arr[num1])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array : %d",count);

    return 0;
}
