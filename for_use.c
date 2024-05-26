/* This program prints the muktiplication table of a number till the value the user gives*/

#include <stdio.h>

int main()
{
    int num1, num2, index, mul;
    char ch;

    Label:

    printf("You want Multiplication Table of any number ( Y or N ) : ");
    scanf(" %c", &ch);

    while (ch == 'Y' || ch == 'y')
    {
        printf("Enter the number you want multiplication table of : ");
        scanf("%d", &num1);

        printf("Enter the number you want multiplication till : ");
        scanf("%d", &num2);

        for (index = 1; index <= num2; index++)
        {
            mul = num1 * index;
            printf("%d X %d = %d\n", num1, index, mul);
        }

        printf("You want Multiplication Table of any number ( Y or N ) : ");
        scanf(" %c", &ch);
    }

    if (ch == 'n' || ch == 'N')
    {
        printf("Okay\nClosing the program !\n");
    }

    else
    {
        printf("Incorrect inuput choose between Y or N !\n\n===> ");
        goto Label;
    }
    
    return 0;
}
