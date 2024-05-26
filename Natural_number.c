#include <stdio.h>

int main()
{
    int choice;
    int number = 0;
    int i = 0;
    printf("Till what number you want addittion : ");
    scanf("%d", &choice);

    while (i <= choice)
    {
        number = (number + i);
        i = (i + 1);
    }
    
    printf("======> %d is the addition of first %d numbers\n\n", number, choice);

    return 0;
}
