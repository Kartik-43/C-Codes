#include <stdio.h>

int factorial(int number)
{
    if ( number == 0 || number == 1 )
    {
        return (1);
    }

    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num, fact;
    char choice;

    printf("You want to find Factorial of a number (Y or N) : ");
    scanf(" %c", &choice);

    while (choice == 'Y' || choice == 'y')
    {
        printf("Enter the number you want factorial of : ");
        scanf("%d", &num);

        fact = factorial(num);
        printf("\n\n==========> The factorial of %d is ====> %d\n\n\n", num, fact);

        printf("====> You want to find Factorial of another number : ");
        scanf(" %c", &choice);
    }

    if (choice == 'N' || choice == 'n')
    {
        printf("\n\nOkay\nClosing the program!\n");
    }
    else
    {
        printf("\n\nWrong Input!\n");
    }

    return 0;
}
