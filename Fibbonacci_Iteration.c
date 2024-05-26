// Index starts from 1 in this code...
// Example of fibonacci series is - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
// =======================> index - 1, 2, 3, 4, 5, 6, 7,  8,  9, 10...

#include <stdio.h>

int main()
{
    int nth, nterms;

    int n1 = 0;
    int n2 = 1;
    int count = 0;

    printf("How many terms you want to print : ");
    scanf("%d", &nterms);

    if (nterms <= 0)
    {
        printf("Please Enter a Positive Integer");
    }

    else if (nterms == 1)
    {
        printf("Fibonacci Series upto %d is term :- ", nterms);
        printf("%d", n1);
    }

    else
    {
        printf("Fibonacci Series upto %d terms is :- \n\n", nterms);

        while (count <= (nterms - 1))
        {
            printf("%d\n", n1);
            nth = (n1 + n2);
            n1 = n2;
            n2 = nth;
            count = count + 1;
        }
    }
    return 0;
}
