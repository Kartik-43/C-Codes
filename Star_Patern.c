/* 

=> Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
=> Then print the pattern accordingly

*
**
***
**** -> Triangular star pattern


****
***
**
* -> Reversed triangular star pattern

*/

#include<stdio.h>

int main()
{
    int a, num;

    printf("Choose '0' for triangular star pattern and '1' for reversed triangular star pattern : ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("\n\n");
        printf("Enter the number of stars for the last line of pattern : ");
        scanf("%d", &num);
        printf("\n\n=========> The Pattern is :- \n\n\n");

        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    else if (a == 1)
    {
        printf("\n\n");
        printf("Enter the number of stars for the last line of pattern : ");
        scanf("%d", &num);
        printf("\n\n=========> The Pattern is :- \n\n\n");

        for (int i = num; i >= 1; i--) 
        {
            for (int j = 1; j <= i; j++) 
            {
                printf("*");
            }
            printf("\n");
        }        
    }
    
    else 
    {
        printf("Invalid choice. Please choose '0' or '1' for the pattern.\n");
    }

    return 0;
}
