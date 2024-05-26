#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divi(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}
int main()
{
    int a, b, c, ad, sub, mul, div, mo;
    label:
        printf("enter two no.s: ");
        scanf("%d %d", &a, &b);
        printf("\n");
        if (a == 0 || a < 0 || b == 0 || b < 0)
        {
            printf("error");
            goto label;
        }
        else
        {
            printf("what do want to do\nfor + press 1\nfor - press 2\nfor * press 3\nfor / press 4\nfor modulus  press 5: ");
            scanf("%d", &c);
            switch (c)
            {
            case 1:
                ad = add(a, b);
                printf("the sum is %d", ad);
                break;
            case 2:
                sub = subtract(a, b);
                printf("the difference is %d", sub);
                break;
            case 3:
                mul = multiply(a, b);
                printf("the product is %d", mul);
                break;
            case 4:
                div = divi(a, b);
                printf("the divison is %d", div);
                break;
            case 5:
                mo = mod(a, b);
                printf("the divison is %d", mo);
                break;
            }
        }
        return 0;
}
