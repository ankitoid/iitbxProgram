/*#include <conio.h>


int main()
{
    int a[100],i,size,j,rotate,temp;

    printf("PROGRAM FOR LEFT ROTATE. \n\n");

    printf("Enter size of the  array : ");
    scanf("%d", &size);

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("How many times left rotate : ");
    scanf("%d", &rotate);

    for(i=0; i<rotate; i++)
    {
        temp=a[0];
        for(j=0; j<size-1; j++)
        {
           a[j]=a[j+1];
		}

         a[size-1]=temp;


    }
    printf("\nArray elements after left rotate  : ");

    for(i=0; i<size; i++)
    {
       printf("%d ",a[i]);
    }

    return 0;
 }*/

#include <stdio.h>


int main()
{
    int arr[100],i,size,j,rotate,temp;


    printf("PROGRAM FOR RIGHT ROTATE. \n\n");

    printf("Enter size of the  array : ");
    scanf("%d", &size);

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("How many times right rotate : ");
    scanf("%d", &rotate);

    for(i=0; i<rotate; i++)
    {
        temp=arr[size-1];
        for(j=size-1; j>0; j--)
        {
           arr[j]=arr[j-1];
		}

         arr[j]=temp;


    }
    printf("\nArray elements after right rotate  : ");

    for(i=0; i<size; i++)
    {
       printf("%d ",arr[i]);
    }

    return 0;
 }
