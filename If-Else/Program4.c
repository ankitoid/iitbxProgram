
#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter a number to check even or odd: ");
    scanf("%d",&num);

    /* Check if the number is divisible by 2 then it is even */
    if(num % 2 == 0)
    {
        printf("Number is Even.");
    }

    /* Otherwise number is not divisible by 2 then it is odd */
    else
    {
        printf("Number is Odd.");
    }

    return 0;
}
