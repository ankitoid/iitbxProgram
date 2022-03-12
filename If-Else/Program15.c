
#include <stdio.h>

int main()
{
    int cp,sp,amt;

    /* Input cost price and selling price of a product */
    printf("Please enter cost price: ");
    scanf("%d",&cp);
    printf("Please enter selling price: ");
    scanf("%d",&sp);

    /* Calculate Profit */
    if(sp > cp)
    {
        amt = sp - cp;
        printf("It's Profit = %d", amt);
    }

    /* Calculate Loss */
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("It's Loss = %d", amt);
    }

     /* Neither profit nor loss */
    else
    {
        printf("No Profit No Loss.");
    }

    return 0;
}
