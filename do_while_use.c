#include <stdio.h>

int main()
{
    int count, index = 0;

    printf("Enter the value till which you want to print counting : ");
    scanf("%d", &count);

    do
    {
        printf("%d\n", index);
        index += 1;
    } while (index <= count);

    return 0;
}
