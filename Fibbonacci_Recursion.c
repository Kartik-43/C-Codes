// Index starts from 1 in this code...
// Example of fibonacci series is - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
// =======================> index - 1, 2, 3, 4, 5, 6, 7,  8,  9, 10...

#include <stdio.h>

int fibonacci(int num)
{
    if (num == 1 || num == 2)
    {
        return num - 1;
    }

    else if (num <= 0)
    {
        printf("Please Enter a Positive integer...");
    }

    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int ch, ans;

    printf("Enter the term you want to print : ");
    scanf("%d", &ch);

    ans = fibonacci(ch);
    printf("Fibonacci Series Number having index %d is :- %d\n", ch, ans);

    return 0;
}
