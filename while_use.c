#include <stdio.h>

int main()
{
    int a, b;
    char yn;

    Label:

    printf("Do you want to do any addition (Y or N): ");
    scanf(" %c", &yn); // Added a space before %c to consume any leading whitespace.

    while (yn == 'Y' || yn == 'y') // check for 'Y' or 'y' .
    {
        printf("Enter First Number 'a': ");
        scanf("%d", &a);

        printf("Enter Second Number 'b': ");
        scanf("%d", &b);

        printf("The addition of a and b is: %d\n", a + b);

        printf("Do you want to do any addition (Y or N): ");
        scanf(" %c", &yn); // Added a space before %c to consume any leading whitespace.
    }

    if (yn == 'N' || yn == 'n') // Check for 'N' or 'n' .
    {
        printf("Closing the program!\n");
    }
    else
    {
        printf("Invalid input!\n");
        goto Label;
    }

    return 0;
}
