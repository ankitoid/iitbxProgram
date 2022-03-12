#include<stdio.h>

int main()
{
    int arr[100] , size , num , tosearch , found=0 ;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    printf("\nEnter elements in the array : ");
    for(num=0; num<size; num++)
    {
        scanf("%d", &arr[num]);
    }

    printf("\nEnter the element To_Search : ");
    scanf("%d",&tosearch);

    for(num=0 ; num<size ; num++)
    {
        if(arr[num] == tosearch)
        {
            found=1;
            break;
        }
    }

    if(found == 1)
        printf("\nThe element %d is found at %d index in the array .",tosearch,num);

    else
        printf("\nNumber = -1 .");

    return 0;
}
