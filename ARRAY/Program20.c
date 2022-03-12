#include <stdio.h>

void main()
{
    int arr[100], fr1[100];
    int size, i, j, ctr;


       printf("Enter the size of array : ");
       scanf("%d",&size);

       printf("Enter the elements of array : ");
       for(i=0;i<size;i++)
            {
                scanf("%d",&arr[i]);
                fr1[i] = -1;
            }

    for(i=0; i<size; i++)
    {
        ctr = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], fr1[i]);
        }
    }
}
