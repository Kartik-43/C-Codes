#include <stdio.h>

int main()
{

    float kelvin, C, fh;
    int ch;
    char cont;

    label:

    printf("Do you want to convert temperature? (Y or N) :- ");
    scanf(" %c", &cont);

    while (cont == 'Y' || cont == 'y')
    {

        printf("Convert the temperature from:\n1) Kelvin to Celsius\n2) Kelvin to Fahrenheit\n3) Celsius to Kelvin\n4) Celsius to Fahrenheit\n5) Fahrenheit to Kelvin\n6) Fahrenheit to Celsius\n\n\n=============> ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:

            printf("Enter temperature in Kelvin :- ");
            scanf("%f", &kelvin);

            C = kelvin - 273.15;

            printf("\n\nThe temperature conversion from Kelvin to Celsius is\n\n==============> %f\n\n\n", C);
            break;

        case 2:

            printf("Enter temperature in Kelvin :- ");
            scanf("%f", &kelvin);

            fh = (kelvin - 273.15) * 9 / 5 + 32; // Correct the formula for Fahrenheit conversion.

            printf("\n\nThe temperature conversion from Kelvin to Fahrenheit is\n\n==============> %f\n\n\n", fh);
            break;

        case 3:

            printf("Enter temperature in Celsius :- ");
            scanf("%f", &C);

            kelvin = C + 273.15;

            printf("\n\nThe temperature conversion from Celsius to Kelvin is\n\n==============> %f\n\n\n", kelvin);
            break;

        case 4:

            printf("Enter temperature in Celsius :- ");
            scanf("%f", &C);

            fh = (C * 9 / 5) + 32;

            printf("\n\nThe temperature conversion from Celsius to Fahrenheit is\n\n==============> %f\n\n\n", fh);
            break;

        case 5:

            printf("Enter temperature in Fahrenheit :- ");
            scanf("%f", &fh);

            C = (fh - 32) * 5 / 9;

            kelvin = C + 273.15;
            printf("\n\nThe temperature conversion from Fahrenheit to Kelvin is\n\n==============> %f\n\n\n", kelvin);
            break;

        case 6:

            printf("Enter temperature in Fahrenheit :- ");
            scanf("%f", &fh);

            C = (fh - 32) * 5 / 9;

            printf("\n\nThe temperature conversion from Fahrenheit to Celsius is\n\n==============> %f\n\n\n", C);
            break;

        default:

            printf("Wrong input, please choose between 1 to 6!\n\n\n");
            break;
        }

        printf("Do you want to convert temperature again? (Y or N) :- ");
        scanf(" %c", &cont);
    }

    if (cont == 'n' || cont == 'N')
    {

        printf("\n\nOkay\n\nClosing the program!\n\n");
    }

    else
    {

        printf("Wrong input!\n");
        goto label;
    }

    return 0;
}
