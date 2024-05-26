#include <stdio.h>

float Add(float num1, float num2)
{
    return (num1 + num2);
}

float Sub(float num1, float num2)
{
    return (num1 - num2);
}

float Divide(float num1, float num2)
{
    return (num1 / num2);
}

float Mul(float num1, float num2)
{
    return (num1 * num2);
}

int main()
{
    int cont = 1;
    char yn;
    int choice;
    float  num1, num2;

    while (cont == 1)
    {
        printf("\nDo you want to Use the calculator(Y or N) : ");
        scanf(" %c", &yn);

        if (yn == 'Y' || yn == 'y')
        {
            printf("\n\nWhat function do you want to do : \n");
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("\n\n===> Enter your choice : ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("\nEnter first number : ");
                scanf("%f", &num1);

                printf("\nEnter Second number : ");
                scanf("%f", &num2);

                printf("\n\n%f + %f = %f\n\n", num1, num2, Add(num1, num2));
                break;

            case 2:
                printf("\nEnter the first number : ");
                scanf("%f", &num1);

                printf("\nEnter second number : ");
                scanf("%f", &num2);

                printf("\n\n%f - %f = %f\n\n", num1, num2, Sub(num1, num2));
                break;

            case 3:
                printf("\nEnter the first number : ");
                scanf("%f", &num1);

                printf("\nEnter second number : ");
                scanf("%f", &num2);

                printf("\n\n%f * %f = %f\n\n", num1, num2, Mul(num1, num2));
                break;

            case 4:
                printf("\nEnter the first number : ");
                scanf("%f", &num1);

                printf("\nEnter second number : ");
                scanf("%f", &num2);

                printf("\n\n%f / %f = %f\n\n", num1, num2, Divide(num1, num2));
                break;
            
            default:
                printf("\n\nInvalid Input!\n");
                break;
            }
        }

        else if (yn == 'N' || yn == 'n')
        {
            printf("\n\nOkay\nClosing the program!\n\n");
            cont = 0;
        }
        
        else
        {
            printf("\n\nInvalid Input!\n");
            cont = 1;
        }
    }
    return 0;
}
