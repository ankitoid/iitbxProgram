#include<stdio.h>

int main()
{
    int age;

    /* Input number from user */
    printf("Enter the age : ");
    scanf("%d", &age);

    if(age >= 13)
    {
        if(age <= 19)
        {
            printf("\nThe user is teenager.");
        }

         else
        {
            printf("\nThe user is not a teenager.");
        }

    }


    return 0;
}
