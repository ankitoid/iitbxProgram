#include<stdio.h>

int main()
{
    int arr[100] , size , num , num1 , num2 ;

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
                for(num2=num1; num2<size-1; num2++)
                {
                    arr[num2] = arr[num2 + 1];
                }

                size--;
                num1--;
            }
        }
    }

    printf("\nArray elements after deleting duplicates : ");
    for(num=0; num<size; num++)
    {
        printf("%d\t",arr[num]);
    }

    return 0;
}


