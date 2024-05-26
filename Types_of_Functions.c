/* There are 4 types of functions :-
            1) Without Arguments & Without Return Value.
            2) Without Arguments & With Return Value.
            3) With Arguments & Without Return Value.
            4) With Arguments & With Return Value.

=========> Writing 1 Simple Code for all of the above... */

#include <stdio.h>

/* This is the 1 type of function...
        without Arguments and without Return Value*/

void MyName()
{
    printf("My name is Kartik Garg");
}

/* This is the 2 type of function...
        without Arguments and with Return Value*/

int TakeNumber()
{
    int i;
    printf("Enter one number : ");
    scanf("%d", &i);
    return i;
}

/* This is the 3 type of function...
        with Arguments and without Return Value*/

void printstar(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf(" %c", '*');
    }
}

/* This is the 4 type of function...
        with Arguments and with Return Value*/

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int ch;
    int ch3, ch4;
    int tn;
    int ch2;
    int ch5;
    char yn;

    printf("Do you want to check any function (Y or N): ");
    scanf(" %c", &yn);

    while (yn == 'Y' || yn == 'y')
    {

        printf("\n\nWhich function output you want to see :- \n\n=====> 1) Without Arguments & Without Return Value.\n\n=====> 2) Without Arguments & With Return Value.\n\n=====> 3) With Arguments & Without Return Value.\n\n=====> 4) With Arguments & With Return Value.\n\n======================> ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            MyName();
            break;

        case 2:
            tn = TakeNumber();
            printf("The number entered : %d", tn);
            break;

        case 3:
            printf("How many stars you want to print : ");
            scanf("%d", &ch2);
            printstar(ch2);

            break;

        case 4:
            printf("Enter First Number : ");
            scanf("%d", &ch3);

            printf("Enter second number : ");
            scanf("%d", &ch4);

            ch5 = sum(ch3, ch4);
            printf("Sum : %d", ch5);

            break;

        default:
            printf("Wrong input !\n");
            break;
        }

        printf("\n\n==> Do you want to check any function (Y or N): ");
        scanf(" %c", &yn);
    }

    if (yn == 'N' || yn == 'n')
    {
        printf("Okay\nClosing the program!\n");
    }
    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}
