#include<stdio.h>

int main()
{
    int arr[20] , flag=0 , size , index , forIndex=0 , backIndex=0 ;

   printf("Enter the number of array : ");
   scanf("%d",&size);

    printf("Enter elements in the first array : ");
    for(index=0; index<size; index++)
    {
        scanf("%d", &arr[index]);
    }

    for(forIndex=0 , backIndex=size-1 ; forIndex<=1 ; forIndex++ , backIndex--)
    {
        if(arr[forIndex] != arr[backIndex])
        {
           flag=1;
            break;
        }
    }

    if(flag == 1)
        printf("\nNOT PALLINDROME");

    else
        printf("\nIS A PALLINDROME");

        return 0;
}
