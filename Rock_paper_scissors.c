// int min = 1;
// int max = 100;
// int randomInRange = (rand() % (max - min + 1)) + min; // Generates a random integer between min and max (inclusive)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    char yn;
    int ch;

    printf("You want to play Rock, Papers & Scissors (Y or N) : ");
    scanf(" %c", &yn);

    while (yn == 'y' || yn == 'Y')
    {
        printf("\n\nWhat do you choose : \n");
        printf("1. Rock\n");
        printf("2. Papers\n");
        printf("3. Scissors\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        int max = 3;
        int min = 1;
        int number = (rand() % (max - min + 1)) + min;
        // printf("number = %d", number);

        if (number == 1 && ch == 1)
        {
            printf("\n\nIt is a DRAW, both Computer and Player chose ROCK!\n\n");
        }

        else if (number == 2 && ch == 2)
        {
            printf("\n\nIt is a DRAW, both Computer and Player chose PAPER!\n\n");
        }

        else if (number == 3 && ch == 3)
        {
            printf("\n\nIt is a DRAW, both Computer and Player chose SCISSORS!\n\n");
        }

        else if (number == 1 && ch == 2)
        {
            printf("\n\nThe Computer chose ROCK\nYou chose PAPER");
            printf("\n\nYou Win\n\n");
        }

        else if (number == 1 && ch == 3)
        {
            printf("\n\nThe Computer chose ROCK\nYou chose SCISSORS");
            printf("\n\nYou Loose!\n\n");
        }

        else if (number == 2 && ch == 1)
        {
            printf("\n\nThe Computer chose PAPER\nYou chose ROCK");
            printf("\n\nYou Loose!\n\n");
        }

        else if (number == 2 && ch == 3)
        {
            printf("\n\nThe Computer chose PAPER\nYou chose SCISSORS");
            printf("\n\nYou Win!\n\n");
        }

        else if (number == 3 && ch == 1)
        {
            printf("\n\nThe Computer chose SCISSORS\nYou chose ROCK");
            printf("\n\nYou Win!\n\n");
        }

        else if (number == 3 && ch == 2)
        {
            printf("\n\nThe Computer chose SCISSORS\nYou chose PAPER");
            printf("\n\nYou Loose!\n\n");
        }

        printf("\nYou want to play Rock, Papers & Scissors again (Y or N) : ");
        scanf(" %c", &yn);
    }

    if (yn == 'n' || yn == 'N')
    {
        printf("\n\nOkay!\nClosing the Game!\n\n");
    }

    else
    {
        printf("\n\nInvalid Input!\n\n");
    }

    return 0;
}
