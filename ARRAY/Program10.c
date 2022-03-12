#include <stdio.h>

int main()
 {
    int arr1[20], arr2[20], arr3[20];
    int i,j=0,k=0,size;

       printf("Enter the size of array : ");
       scanf("%d",&size);

       printf("\nEnter the elements of the array : ");
       for(i=0;i<size;i++)
        {
	      scanf("%d",&arr1[i]);
	    }

    for(i=0;i<size;i++)
    {
        if (arr1[i]%2 == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }

        else
        {
            arr3[k] = arr1[i];
            k++;
        }
    }

    printf("\nThe Even elements are : ");
    for(i=0;i<j;i++)
    {
        printf("%d ",arr2[i]);
    }

    printf("\nThe Odd elements are : ");
    for(i=0;i<k;i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
 }
