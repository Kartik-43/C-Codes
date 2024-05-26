#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        printf("\n\nNumber is Neither prime Nor coposite!\n");
        return 0;
    }

    else if (num <= 3)
    {
        printf("\nThe number is prime!\n");
        return 1; // 2 & 3 are prime numbers.
    }

    else if (num > 1)
    {
        for (int i = 3; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("\n\nNumber is not a prime number!\n");
                break;
                return 0;
            }

            else
            {
                printf("\n\nNumber is a prime number!\n");
                return 1;
            }
        }
    }

    else
    {
        printf("\n\ninvalid input!\n");
    }
}

int main()
{
    int number;

    printf("Enter the number : ");
    scanf("%d", &number);

    isPrime(number);

    return 0;
}
