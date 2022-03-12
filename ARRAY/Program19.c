#include <stdio.h>


int main()
{
    int arr[100], freq[100];
    int size, index , index1, count;

    printf("Enter size of array : ");
    scanf("%d", &size);

    printf("Enter elements in array : ");
    for(index=0; index<size; index++)
    {
        scanf("%d", &arr[index]);
        freq[index] = -1;
    }

    for(index=0; index<size; index++)
    {
        count = 1;
        for(index1=index+1; index1<size; index1++)
        {
            if(arr[index] == arr[index1])
            {
                count++;
                freq[index1] = 0;
            }
        }

        if(freq[index] != 0)
        {
            freq[index] = count;
        }
    }

    printf("\nUnique elements in the array are : ");
    for(index=0; index<size; index++)
    {
        if(freq[index] == 1)
        {
            printf("%d ", arr[index]);
        }
    }

    return 0;
}
