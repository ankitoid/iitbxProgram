 #include <stdio.h>

int main()
{
        int arr[100], size , index , num ;

        printf("Enter the size of array : ");
        scanf("%d", &size);

        printf("\nEnter the array elements : ");
        for (index = 0; index < size; index++)
        {
            scanf("%d", &arr[index]);
        }

        printf("\nEnter Which kth Number You want : ");
        scanf("%d", &num);

        printf("\nThe %d th kth number is: %d", num, arr[num - 1]);

        return 0;
}
