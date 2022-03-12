#include <stdio.h>

int main()
{
	int age;

	printf("Please enter age:");
	scanf("%d", &age);

	if(age>=0)
    {
        if(age<=5)
		{
		    printf("\nThe user is an infant");
		}

		else
        {
             printf("\nOther");
        }


		 if(age>=13)
        {
           if (age<=19)
           {
              printf("\nThe user is a Teenager");
           }

           else
        {
             printf("\nOther");
        }

        }


          if(age>60)
        {
            printf("\nThe user is a Senior Citizen");
        }


    }







    return 0;
}
