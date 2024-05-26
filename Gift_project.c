#include <stdio.h>

int main()
{
    const int g1 = 45;
    const int g2 = 15;
    int pass;

    label:

    printf("Which subject have you passed in : \n1 : Maths\n2 : Science\n3 : Both Maths & Science\n4 : Failed in both\n----->");
    scanf("%d", &pass);

    if (pass == 1)
    {
        printf("Congratulations you have won a gift prize of %d", g2);
    }

    else if (pass == 2)
    {
        printf("Congratulations you have won a gift prize of %d", g2);
    }

    else if (pass == 3)
    {
        printf("Congratulations you have won a gift prize of %d", g1);
    }

    else if (pass == 4)
    {
        printf("Sorry you have not won any gift prize!");
    }

    else
    {
        printf("Enter the correct input!");
        goto label;
    }

    return 0;
}
