#include <stdio.h>

int main()
{
    int Subject1 , Subject2 , Subject3 , Subject4 , Subject5 ;
    float per;

    /* Input marks of five subjects from user */
    printf("Enter the marks of five subjects : ");
    scanf("%d%d%d%d%d", &Subject1 , &Subject2 , &Subject3 , &Subject4 , &Subject5);


    /* Calculate percentage */
    per = (Subject1 + Subject2 + Subject3 + Subject4 + Subject5) / 5.0;

    printf("Percentage = %.2f\n", per);


    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
