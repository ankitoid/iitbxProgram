#include<stdio.h>

int  main()
{

    int arr[100];
    int index,num,size,pos;

    printf("Enter the size of array :");
    scanf("%d",&size);


    printf("Enter the elements of array : ");
    for(index=0; index<size; index++)
    {
        scanf("%d",&arr[index]);
    }

    printf("\n\nEnter which new element you want to insert : ");
    scanf("%d",&num);

    printf("\nEnter the position to insert new element : ");
    scanf("%d",&pos);


    for(index=0; index<size; index++)
    {
        if(index+1==pos)
        {
            arr[pos-1]=num;
        }
    }

    printf("Array after insertion of element : \n");
    for(index=0; index<size; index++)
    {
        printf("%d ",arr[index]);
    }

 return 0;

}
